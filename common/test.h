// Tiny test harness. Each problem's NN-name.test.cpp includes this,
// then includes the solution file, then lists CASEs in main().
#pragma once

#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

#ifdef _WIN32
#include <crtdbg.h>
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

namespace t {

// Debug builds check vector bounds. On Windows, make those errors print
// to the console instead of popping up a dialog box.
#ifdef _WIN32
inline const bool quiet_crashes_ = [] {
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
    _set_abort_behavior(0, _WRITE_ABORT_MSG | _CALL_REPORTFAULT);
    for (int type : {_CRT_WARN, _CRT_ERROR, _CRT_ASSERT}) {
        _CrtSetReportMode(type, _CRTDBG_MODE_FILE);
        _CrtSetReportFile(type, _CRTDBG_FILE_STDERR);
    }
    return true;
}();
#endif

inline int passed = 0;
inline int failed = 0;
inline std::chrono::steady_clock::time_point started;

// ---- printing values ----
template <class T> std::string show(const T& v);
inline std::string show(const std::string& s);
template <class A, class B> std::string show(const std::pair<A, B>& p);
template <class T> std::string show(const std::vector<T>& v);

template <class T> std::string show(const T& v) {
    std::ostringstream o;
    o << v;
    return o.str();
}
inline std::string show(const std::string& s) { return "\"" + s + "\""; }
template <class A, class B> std::string show(const std::pair<A, B>& p) {
    return "(" + show(p.first) + ", " + show(p.second) + ")";
}
template <class T> std::string show(const std::vector<T>& v) {
    std::string s = "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i == 12) { s += ", ... (" + std::to_string(v.size()) + " items)"; break; }
        if (i) s += ", ";
        s += show(v[i]);
    }
    return s + "]";
}

// For "any order" answers.
template <class T> std::vector<T> sorted(std::vector<T> v) {
    std::sort(v.begin(), v.end());
    return v;
}

// ---- running cases ----
inline void begin(const std::string& desc) {
    std::cout << "  " << desc << " ... " << std::flush;
    started = std::chrono::steady_clock::now();
}

template <class G, class W> void end(const G& got, const W& want) {
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
                  std::chrono::steady_clock::now() - started).count();
    bool ok = (got == want);
    if (ok) { ++passed; std::cout << "PASS"; }
    else    { ++failed; std::cout << "FAIL"; }
    if (ms > 1000) std::cout << "  (SLOW: " << ms << " ms)";
    std::cout << "\n";
    if (!ok) {
        std::cout << "      got:  " << show(got) << "\n"
                  << "      want: " << show(want) << "\n";
    }
}

inline int summary() {
    std::cout << "\n" << (failed ? "FAILED" : "ALL PASSED") << "  "
              << passed << "/" << (passed + failed) << "\n";
    return failed ? 1 : 0;
}

}  // namespace t

// CASE("description", expression, expected)
// The description prints first, so if the solution crashes you see which case did it.
#define CASE(desc, expr, ...)                 \
    do {                                      \
        t::begin(desc);                       \
        auto t_got_ = (expr);                 \
        t::end(t_got_, (__VA_ARGS__));        \
    } while (0)
