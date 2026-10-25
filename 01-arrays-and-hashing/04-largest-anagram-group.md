# 04 — Largest Anagram Group

**Arrays & Hashing · Easy**

Given a list of words, return the size of the largest group of words that are anagrams of each other.

Two words are anagrams if they have the same letters with the same counts (`"tea"` and `"eat"`).

```cpp
int largestAnagramGroup(const std::vector<std::string>& words);
```

## Examples

```
["eat", "tea", "tan", "ate", "nat", "bat"]  ->  3     {eat, tea, ate}
["abc", "def"]                              ->  1
["a", "a"]                                  ->  2
[]                                          ->  0
```

## Constraints

- `0 <= words.length <= 10^4`
- `1 <= words[i].length <= 100`
- Only lowercase `a`-`z`
- Target: about O(n · L), where L is word length
