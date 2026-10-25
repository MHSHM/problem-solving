#include "test.h"
#include "08-count-subarrays-with-sum.cpp"

int main() {
    CASE("[1, 1, 1], k=2", countSubarrays({1, 1, 1}, 2), 2LL);
    CASE("[1, 2, 3], k=3", countSubarrays({1, 2, 3}, 3), 2LL);
    CASE("[1, -1, 0], k=0", countSubarrays({1, -1, 0}, 0), 3LL);
    CASE("[3, 4, 7, 2, -3, 1, 4, 2], k=7", countSubarrays({3, 4, 7, 2, -3, 1, 4, 2}, 7), 4LL);
    CASE("[], k=0", countSubarrays({}, 0), 0LL);
    CASE("[5], k=5", countSubarrays({5}, 5), 1LL);
    CASE("[5], k=0", countSubarrays({5}, 0), 0LL);
    CASE("[-2, -3], k=-5", countSubarrays({-2, -3}, -5), 1LL);
    CASE("[1e9, 1e9, 1e9, -1e9], k=2e9",
         countSubarrays({1000000000, 1000000000, 1000000000, -1000000000}, 2000000000LL), 3LL);
    CASE("[1e9, 1e9, 1e9], k=3e9",
         countSubarrays({1000000000, 1000000000, 1000000000}, 3000000000LL), 1LL);

    {
        std::vector<int> v(100000, 0);
        CASE("n=100000 all 0s, k=0", countSubarrays(v, 0), 5000050000LL);
    }
    {
        std::vector<int> v(100000, 1000000000);
        CASE("n=100000 all 1e9, k=1e14", countSubarrays(v, 100000000000000LL), 1LL);
    }

    return t::summary();
}
