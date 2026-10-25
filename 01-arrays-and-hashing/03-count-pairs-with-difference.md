# 03 — Count Pairs With Difference

**Arrays & Hashing · Easy**

Given an integer array `nums` and an integer `k`, return the number of index pairs `(i, j)` with `i < j` and `|nums[i] - nums[j]| == k`.

```cpp
long long countPairsDiff(const std::vector<int>& nums, int k);
```

## Examples

```
nums = [1, 3, 5],    k = 2  ->  2     (1,3) and (3,5)
nums = [4, 1, 4, 7], k = 3  ->  4     pairs (0,1) (0,3) (1,2) (2,3)
nums = [2, 2, 2],    k = 0  ->  3
nums = [1, 2],       k = 5  ->  0
```

## Constraints

- `nums` is **not** sorted, may be empty
- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `0 <= k <= 10^9`
- Target: O(n) time
