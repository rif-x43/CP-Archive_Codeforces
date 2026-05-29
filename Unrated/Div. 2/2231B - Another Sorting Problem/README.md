# B. Another Sorting Problem

| Field | Value |
|---|---|
| **Contest** | [2231](https://codeforces.com/contest/2231) |
| **Problem** | [2231B — Another Sorting Problem](https://codeforces.com/contest/2231/problem/B) |
| **Rating** | Gym/Unrated |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 78 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.5 seconds | 256 megabytes |

---

You are given an array `a_1, a_2, …, a_n`. You can perform the following operation on this array at most once:

- Choose a positive integer `k`, as well as a subsequence `b_1, b_2, …, b_m` of the array `a``^∗` and add `k` to each element of this subsequence, that is, for each `i` perform `a_b_i := a_b_i + k`.

You need to determine whether it is possible to sort the array in **nondecreasing** order by performing this operation at most once.

`^∗`A sequence `b` is a subsequence of a sequence `a` if `b` can be obtained from `a` by the deletion of several (possibly, zero or all) element from arbitrary positions.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10^4`). The description of the test cases follows. 

In the first line of each test case, one integer `n` is given (`1 ≤ n ≤ 2 · 10^5`) — the length of the array `a`.

In the second line of each test case, `n` integers `a_1, a_2, …, a_n` are given (`1 ≤ a_i ≤ 10^9`).

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10^5`.

## Output

For each test case, print "`Yes`" if it is possible to sort the array by performing the operation at most once. Otherwise, print "`No`". You may print the answer in any case. For example, "`YeS`", "`YES`", "`NO`", "`nO`" will also be accepted.

## Examples

**Example:**

```
8
4
1 2 3 4
5
10 5 9 4 4
7
8 3 9 4 10 5 11
6
5 3 10 5 9 7
3
2 1 1
5
2 1 1 2 1
3
3 1 2
5
2 1 2 3 1
```

**Output:**

```
YES
NO
YES
NO
YES
YES
YES
NO
```

## Note

In the first test case, the array is already sorted, so the operation does not need to be performed at all.

In the second test case, it can be shown that it is impossible to sort the array using such an operation.

In the third test case, choose `k = 6` and choose the subsequence `[2, 4, 6]` as `b`. Then after this operation, the array `a` becomes `[8, 9, 9, 10, 10, 11, 11]` (the elements of the chosen subsequence are shown in bold).

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2231/problem/B)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
