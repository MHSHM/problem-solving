# 01 — First Second Occurrence

**Arrays & Hashing · Easy**

Given an integer array `nums`, return the value whose **second occurrence** has the smallest index.
If no value appears twice, return `-1`.

```cpp
int firstReturn(const std::vector<int>& nums);
```

## Examples

```
[7, 3, 5, 3, 7]  ->  3     (3 repeats at index 3, 7 repeats at index 4)
[4, 9, 4, 9]     ->  4
[1, 2, 3]        ->  -1
[8, 8]           ->  8
```

## Constraints

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- Target: O(n) time
