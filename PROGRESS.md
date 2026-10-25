# Progress

## Rules (Claude coordinates)
- Each topic: Easy → Medium → Hard.
- Level up after 2 problems in a row solved with no hints.
- Needed hints or many tries → another problem at the same level, same pattern.
- A topic is done when every core pattern below has a no-hint solve, including 2 Mediums.
- Hard is optional per topic. Do 1 if Mediums went smoothly.
- Review: every ~5 problems, one problem on an earlier pattern that needed hints.

## Topics and core patterns
1. Arrays & Hashing ← current
   - [x] seen-set (01)
   - [x] count + complement lookup (02 hints, 03 solid)
   - [x] group by key (04)
   - [~] prefix sums (05, idea alone, off-by-one x2; recheck at Medium)
   - [x] in-place index tricks (06 hints, 07 solid)
2. Two Pointers: opposite ends on sorted · partition in place · fast/slow
3. Sliding Window: fixed size · variable size
4. Stack: matching · monotonic stack
5. Binary Search: on array · on the answer
6. Linked List: reverse · fast/slow · merge
7. Trees: DFS recursion · BFS by level · BST property
8. Heaps: top-k · merge k sorted
9. Graphs: grid BFS/DFS · topological sort · union-find
10. Dynamic Programming: 1D · 2D grid · knapsack · strings

## Log
| # | Topic | Problem | Pattern | Level | Result | Notes |
|---|---|---|---|---|---|---|
| 01 | Arrays & Hashing | First Second Occurrence | seen-set | Easy | ✅ | 2 tries, no hints |
| 02 | Arrays & Hashing | Count Pairs With Sum | count + complement | Easy | ✅ | Needed hints, redone once |
| 03 | Arrays & Hashing | Count Pairs With Difference | count + complement | Easy | ✅ | Small math hint, missed k=0 once |
| 04 | Arrays & Hashing | Largest Anagram Group | group by key | Easy | ✅ | Found the idea alone, 1 try |
| 05 | Arrays & Hashing | Range Sum Queries | prefix sums | Easy | ✅ | Idea alone, 3 tries (l=0 off-by-one), big stack array |
| 06 | Arrays & Hashing | Missing Numbers | in-place index | Easy | ✅ | 3 hints (sign-marking), bugs: abs, re-flip, i+1 |
| 07 | Arrays & Hashing | Find Duplicates | in-place index | Easy | ✅ | No hints, fixed via tests |

## Next
All Easy patterns done → Mediums. 08: Medium, prefix sum + hashmap (rechecks prefix sums and complement counting).
