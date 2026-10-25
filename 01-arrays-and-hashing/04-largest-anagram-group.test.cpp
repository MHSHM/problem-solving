#include "test.h"
#include "04-largest-anagram-group.cpp"

int main() {
    CASE("[eat, tea, tan, ate, nat, bat]",
         largestAnagramGroup({"eat", "tea", "tan", "ate", "nat", "bat"}), 3);
    CASE("[abc, def]", largestAnagramGroup({"abc", "def"}), 1);
    CASE("[a, a]", largestAnagramGroup({"a", "a"}), 2);
    CASE("[]", largestAnagramGroup({}), 0);
    CASE("[aab, aba, abb]", largestAnagramGroup({"aab", "aba", "abb"}), 2);
    CASE("[ab, ba, abc, cab, bca, b]",
         largestAnagramGroup({"ab", "ba", "abc", "cab", "bca", "b"}), 3);

    {
        std::vector<std::string> v;
        for (int i = 0; i < 10000; ++i) {
            std::string w(100, 'a');
            w[i % 100] = 'z';  // every word is 99 a's + one z: all anagrams
            v.push_back(w);
        }
        CASE("n=10000 words of length 100, all anagrams", largestAnagramGroup(v), 10000);
    }

    return t::summary();
}
