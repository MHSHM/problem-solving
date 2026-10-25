# 05 — Range Sum Queries

**Arrays & Hashing · Easy**

Given an integer array `nums` and a list of queries, where each query is `[l, r]`, return the sum of `nums[l..r]` (inclusive) for each query.

```cpp
std::vector<long long> rangeSums(const std::vector<int>& nums,
                                 const std::vector<std::pair<int,int>>& queries);
```

## Examples

```
nums = [2, 4, 1, 3]
queries = [(0, 1), (1, 3), (2, 2)]  ->  [6, 8, 1]
```

```
nums = [-1, 5]
queries = [(0, 1)]                  ->  [4]
```

## Constraints

- `1 <= nums.length <= 10^5`
- `0 <= queries.length <= 10^5`
- `0 <= l <= r < nums.length`
- `-10^9 <= nums[i] <= 10^9`
- Target: O(n + q) time
