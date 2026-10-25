# 06 — Missing Numbers

**Arrays & Hashing · Easy**

Given an array `nums` of length `n` where every value is in `[1, n]`, return all values in `[1, n]` that do **not** appear in `nums`, in increasing order.

Some values may appear more than once.

```cpp
std::vector<int> findMissing(std::vector<int>& nums);
```

## Examples

```
[4, 3, 2, 7, 8, 2, 3, 1]  ->  [5, 6]
[1, 1]                    ->  [2]
[1, 2, 3]                 ->  []
```

## Constraints

- `nums` is **not** sorted
- `1 <= n <= 10^5`
- `1 <= nums[i] <= n`
- You **may modify** `nums`
- Target: O(n) time, **O(1) extra space** (the returned vector doesn't count, so no hash set and no extra array)
