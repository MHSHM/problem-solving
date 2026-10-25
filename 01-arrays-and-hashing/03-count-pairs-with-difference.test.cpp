#include "test.h"
#include "03-count-pairs-with-difference.cpp"

int main() {
    CASE("[1, 3, 5], k=2", countPairsDiff({1, 3, 5}, 2), 2LL);
    CASE("[4, 1, 4, 7], k=3", countPairsDiff({4, 1, 4, 7}, 3), 4LL);
    CASE("[2, 2, 2], k=0", countPairsDiff({2, 2, 2}, 0), 3LL);
    CASE("[1, 2], k=5", countPairsDiff({1, 2}, 5), 0LL);
    CASE("[], k=1", countPairsDiff({}, 1), 0LL);
    CASE("[-3, 0, 3], k=3", countPairsDiff({-3, 0, 3}, 3), 2LL);
    CASE("[1e9, 0, -1e9], k=1e9", countPairsDiff({1000000000, 0, -1000000000}, 1000000000), 2LL);

    {
        std::vector<int> v(100000, 5);
        CASE("n=100000 all 5s, k=0", countPairsDiff(v, 0), 4999950000LL);
    }

    return t::summary();
}
