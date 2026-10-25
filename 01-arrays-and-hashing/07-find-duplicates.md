# 07 — Find Duplicates

**Arrays & Hashing · Easy**

Given an array `nums` of length `n` where every value is in `[1, n]`, each value appears **once or twice**.

Return all values that appear **twice**, in any order.

```cpp
std::vector<int> findDuplicates(std::vector<int>& nums);
```

## Examples

```
[4, 3, 2, 7, 8, 2, 3, 1]  ->  [2, 3]
[1, 1, 2]                 ->  [1]
[1]                       ->  []
```

## Constraints

- `nums` is **not** sorted
- `1 <= n <= 10^5`
- `1 <= nums[i] <= n`
- You **may modify** `nums`
- Target: O(n) time, **O(1) extra space** (the returned vector doesn't count)
