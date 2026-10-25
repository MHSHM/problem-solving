# 08 — Count Subarrays With Sum

**Arrays & Hashing · Medium**

Given an integer array `nums` and an integer `k`, return the number of **subarrays** whose sum equals `k`.

A subarray is a contiguous, non-empty part of the array.

```cpp
long long countSubarrays(const std::vector<int>& nums, long long k);
```

## Examples

```
[1, 1, 1],        k = 2  ->  2     [1,1] twice
[1, 2, 3],        k = 3  ->  2     [1,2] and [3]
[1, -1, 0],       k = 0  ->  3     [1,-1], [0], [1,-1,0]
[3, 4, 7, 2, -3, 1, 4, 2], k = 7  ->  4
```

## Constraints

- `nums` is **not** sorted, may be empty
- Values **can be negative**
- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `-10^14 <= k <= 10^14`
- Target: O(n) time
