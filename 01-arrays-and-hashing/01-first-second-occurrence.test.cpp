#include "test.h"
#include "01-first-second-occurrence.cpp"

int main() {
    CASE("[7, 3, 5, 3, 7]", firstReturn({7, 3, 5, 3, 7}), 3);
    CASE("[4, 9, 4, 9]", firstReturn({4, 9, 4, 9}), 4);
    CASE("[1, 2, 3]", firstReturn({1, 2, 3}), -1);
    CASE("[8, 8]", firstReturn({8, 8}), 8);
    CASE("[]", firstReturn({}), -1);
    CASE("[5]", firstReturn({5}), -1);
    CASE("[1, 2, 2, 1]", firstReturn({1, 2, 2, 1}), 2);
    CASE("[-5, 2, -5]", firstReturn({-5, 2, -5}), -5);
    CASE("[1e9, -1e9, 1e9]", firstReturn({1000000000, -1000000000, 1000000000}), 1000000000);

    {
        std::vector<int> v;
        for (int i = 0; i < 100000; ++i) v.push_back(i);
        v.push_back(99999);
        v.push_back(5);
        CASE("n=100002, 0..99999 then 99999, 5", firstReturn(v), 99999);
    }

    return t::summary();
}
