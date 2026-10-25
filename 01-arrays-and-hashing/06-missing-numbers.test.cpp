#include "test.h"
#include "06-missing-numbers.cpp"

using VI = std::vector<int>;

// nums is taken by reference, so pass a copy.
VI run(VI nums) { return findMissing(nums); }

int main() {
    CASE("[4, 3, 2, 7, 8, 2, 3, 1]", run({4, 3, 2, 7, 8, 2, 3, 1}), VI{5, 6});
    CASE("[1, 1]", run({1, 1}), VI{2});
    CASE("[1, 2, 3]", run({1, 2, 3}), VI{});
    CASE("[1]", run({1}), VI{});
    CASE("[2, 2]", run({2, 2}), VI{1});
    CASE("[3, 3, 3]", run({3, 3, 3}), VI{1, 2});
    CASE("[2, 1]", run({2, 1}), VI{});

    {
        VI v(100000, 1), want;
        for (int i = 2; i <= 100000; ++i) want.push_back(i);
        CASE("n=100000 all 1s", run(v), want);
    }

    return t::summary();
}
