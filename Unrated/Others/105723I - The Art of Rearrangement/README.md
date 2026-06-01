# I. The Art of Rearrangement

| Field | Value |
|---|---|
| **Contest** | [105723](https://codeforces.com/contest/105723) |
| **Problem** | [105723I — The Art of Rearrangement](https://codeforces.com/contest/105723/problem/I) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 156 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Given an array `a` of length `n`, please rearrange the elements of `a` such that the values `a_i - i` are pairwise distinct over all `1 ≤ i ≤ n`.

## Input

The first line contains a single integer `t` `(1≤ t≤ 10^5)` — the number of test cases.

For each test case, the first line contains a single integer `n` `(2 ≤ n ≤ 10^5)`.

The second line contains `n` integers `a_1,a_2,…,a_n` `(1≤ a_i ≤ 10^5)` — the elements of the array.

It is guaranteed that the sum of `n` over all test cases does not exceed `5· 10^5`.

## Output

For each test case, print `n` integers — a valid rearrangement of the array, or `-1` if no such rearrangement exists. If there are multiple solutions, output any.

## Examples

**Example:**

```
3
4
1 7 3 5
2
6 4
3
2 3 4

```

**Output:**

```
1 3 5 7
4 6
2 4 3

```

## Note

In the first test case, one valid rearrangement of the array is `[1, 3, 5, 7]`. Because, the differences are: `[a_1 - 1, a_2 - 2, a_3 - 3, a_4 - 4]` `=` `[0, 1, 2, 3]`. All of them are distinct.

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/105723/problem/I)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
