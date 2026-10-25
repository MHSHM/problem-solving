#include "test.h"
#include "05-range-sum-queries.cpp"

using VL = std::vector<long long>;

int main() {
    CASE("[2, 4, 1, 3], (0,1) (1,3) (2,2)",
         rangeSums({2, 4, 1, 3}, {{0, 1}, {1, 3}, {2, 2}}), VL{6, 8, 1});
    CASE("[-1, 5], (0,1)", rangeSums({-1, 5}, {{0, 1}}), VL{4});
    CASE("[7], (0,0)", rangeSums({7}, {{0, 0}}), VL{7});
    CASE("[1, 2, 3], no queries", rangeSums({1, 2, 3}, {}), VL{});
    CASE("[5, -2, 3], (0,0) (0,2) (2,2)",
         rangeSums({5, -2, 3}, {{0, 0}, {0, 2}, {2, 2}}), VL{5, 6, 3});
    CASE("[1e9, 1e9, 1e9], (0,2)",
         rangeSums({1000000000, 1000000000, 1000000000}, {{0, 2}}), VL{3000000000LL});

    {
        std::vector<int> v(100000, 1000000000);
        std::vector<std::pair<int, int>> q(100000, {0, 99999});
        VL want(100000, 100000LL * 1000000000LL);
        CASE("n=100000 all 1e9, 100000 queries (0,99999)", rangeSums(v, q), want);
    }

    return t::summary();
}
