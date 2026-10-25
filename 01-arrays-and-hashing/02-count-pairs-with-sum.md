# 02 — Count Pairs With Sum

**Arrays & Hashing · Easy**

Given an integer array `nums` and an integer `k`, return the number of index pairs `(i, j)` with `i < j` and `nums[i] + nums[j] == k`.

```cpp
long long countPairs(const std::vector<int>& nums, int k);
```

## Examples

```
nums = [1, 5, 3, 3, 3], k = 6  ->  4     (1+5 once, 3+3 three times)
nums = [2, 2, 2, 2],    k = 4  ->  6
nums = [1, 2, 3],       k = 10 ->  0
nums = [],              k = 0  ->  0
```

## Constraints

- `nums` is **not** sorted
- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i], k <= 10^9`
- Target: O(n) time
