# A. Mainak and Array

| Field | Value |
|---|---|
| **Contest** | [1726](https://codeforces.com/contest/1726) |
| **Problem** | [1726A — Mainak and Array](https://codeforces.com/contest/1726/problem/A) |
| **Rating** | 900 |
| **Tags** | greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Mainak has an array `a_1, a_2, …, a_n` of `n` positive integers. He will do the following operation to this array **exactly once**:

 - Pick a subsegment of this array and cyclically rotate it by any amount.

 Formally, he can do the following exactly once: - Pick two integers `l` and `r`, such that `1 ≤ l ≤ r ≤ n`, and any positive integer `k`.
- Repeat this `k` times: set `a_l=a_l+1, a_l+1=a_l+2, …, a_r-1=a_r, a_r=a_l` (all changes happen at the same time).

Mainak wants to **maximize** the value of `(a_n - a_1)` after exactly one such operation. Determine the maximum value of `(a_n - a_1)` that he can obtain.

## Input

Each test contains multiple test cases. The first line contains a single integer `t` (`1 ≤ t ≤ 50`) — the number of test cases. Description of the test cases follows.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 2000`).

The second line of each test case contains `n` integers `a_1, a_2, …, a_n` (`1 ≤ a_i ≤ 999`).

It is guaranteed that the sum of `n` over all test cases does not exceed `2000`.

## Output

For each test case, output a single integer — the maximum value of `(a_n - a_1)` that Mainak can obtain by doing the operation **exactly once**.

## Examples

**Example:**

```
5
6
1 3 9 11 5 7
1
20
3
9 99 999
4
2 1 8 1
3
2 1 5
```

**Output:**

```
10
0
990
7
4

```

## Note

- In the first test case, we can rotate the subarray from index `3` to index `6` by an amount of `2` (*i.e*. choose `l = 3`, `r = 6` and `k = 2`) to get the optimal array: `[1, 3, 9, 11, 5, 7] longrightarrow [1, 3, 5, 7, 9, 11]` So the answer is `a_n - a_1 = 11 - 1 = 10`.
- In the second testcase, it is optimal to rotate the subarray starting and ending at index `1` and rotating it by an amount of `2`.
- In the fourth testcase, it is optimal to rotate the subarray starting from index `1` to index `4` and rotating it by an amount of `3`. So the answer is `8 - 1 = 7`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1726/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
