# B. Cake Leveling

| Field | Value |
|---|---|
| **Contest** | [2232](https://codeforces.com/contest/2232) |
| **Problem** | [2232B — Cake Leveling](https://codeforces.com/contest/2232/problem/B) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 93 ms |
| **Memory** | 1000 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.5 seconds | 256 megabytes |

---

Alice is preparing a cake for her party. However, she is in a rush, so the frosting on the cake is uneven. To quickly solve this issue, Alice will put her knife at some **integer** height and then sweep the frosting from left to right to make the frosting level.

Formally, let `a_i` be the height of the frosting at the `i`-th position. Suppose that Alice puts her knife at some **integer** height `h`. If the height of frosting at position `i` is greater than `h`, the excess frosting will be pushed to position `i + 1`. Excess frosting on position `n` will be pushed off the cake completely. 

Alice and her friends really love cake frosting. Since Alice might decide to serve some prefix of the cake instead of the whole cake, help her find the maximum height the frosting can be while keeping the frosting level for the first `i` positions for `i = 1, 2, …, n`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10^4`). The description of the test cases follows. 

The first line of each test case contains an integer `n` (`2 ≤ n ≤ 2· 10^5`) — the length of Alice's cake.

The second line of each test case contains `n` integers `a_1,a_2,…,a_n` (`1 ≤ a_i ≤ 10^9`) — the height of the frosting at the `i`-th position.

The sum of `n` over all test cases is at most `2 · 10^5`.

## Output

For each test case, output `n` integers where the `i`-th integer represents the maximum height the frosting can be while keeping the frosting level for the first `i` positions.

## Examples

**Example:**

```
5
3
4 2 3
5
2 3 4 3 2
5
3 3 3 1 1
3
913764826 346182673 764382516
8
6 7 6 7 6 7 6 7
```

**Output:**

```
4 3 3 
2 2 2 2 2 
3 3 3 2 2 
913764826 629973749 629973749 
6 6 6 6 6 6 6 6 
```

## Note

The explanation of the first test case is as follows:

When `i = 1`, Alice is interested in the cake represented by an array `[4]`. Since the cake is already leveled, the maximum height the frosting can be is `4`.

When `i = 2`, Alice is interested in the cake represented by an array `[4, 2]`. If Alice put her knife at height `4`, the resulting cake will have a frosting of height `[4, 2]`, making the cake not levelled. However, if Alice put her knife at height `3`, one unit of frosting will be pushed from the first position to the second position, making the resulting cake have a frosting height of `[3, 3]`, which is leveled. Therefore, the maximum height the frosting can be while keeping it levelled is `3`.

When `i = 3`, if Alice put her knife at height `4`, the resulting frosting level will be `[4, 2, 3]`. However, if Alice put her knife at height `3`, the resulting frosting level will be `[3, 3, 3]`. Therefore, the maximum height the frosting can be while keeping it levelled is `3`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2232/problem/B)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
