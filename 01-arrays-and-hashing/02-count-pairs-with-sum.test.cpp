#include "test.h"
#include "02-count-pairs-with-sum.cpp"

int main() {
    CASE("[1, 5, 3, 3, 3], k=6", countPairs({1, 5, 3, 3, 3}, 6), 4LL);
    CASE("[2, 2, 2, 2], k=4", countPairs({2, 2, 2, 2}, 4), 6LL);
    CASE("[1, 2, 3], k=10", countPairs({1, 2, 3}, 10), 0LL);
    CASE("[], k=0", countPairs({}, 0), 0LL);
    CASE("[3], k=6", countPairs({3}, 6), 0LL);
    CASE("[-1, 7, 3, 5, -3], k=4", countPairs({-1, 7, 3, 5, -3}, 4), 2LL);
    CASE("[1e9, -1e9], k=0", countPairs({1000000000, -1000000000}, 0), 1LL);

    {
        std::vector<int> v(100000, 1);
        CASE("n=100000 all 1s, k=2", countPairs(v, 2), 4999950000LL);
    }

    return t::summary();
}
