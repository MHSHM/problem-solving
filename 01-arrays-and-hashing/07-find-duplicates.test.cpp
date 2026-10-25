#include "test.h"
#include "07-find-duplicates.cpp"

using VI = std::vector<int>;

// nums is taken by reference, so pass a copy. Any order is fine, so sort.
VI run(VI nums) { return t::sorted(findDuplicates(nums)); }

int main() {
    CASE("[4, 3, 2, 7, 8, 2, 3, 1]", run({4, 3, 2, 7, 8, 2, 3, 1}), VI{2, 3});
    CASE("[1, 1, 2]", run({1, 1, 2}), VI{1});
    CASE("[1]", run({1}), VI{});
    CASE("[2, 2]", run({2, 2}), VI{2});
    CASE("[2, 1, 2, 1]", run({2, 1, 2, 1}), VI{1, 2});
    CASE("[3, 1, 2]", run({3, 1, 2}), VI{});

    {
        VI v, want;
        for (int i = 1; i <= 50000; ++i) { v.push_back(i); v.push_back(i); want.push_back(i); }
        CASE("n=100000, every value twice", run(v), want);
    }

    return t::summary();
}
