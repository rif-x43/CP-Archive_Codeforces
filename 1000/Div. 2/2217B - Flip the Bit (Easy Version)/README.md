# B. Flip the Bit (Easy Version)

| Field | Value |
|---|---|
| **Contest** | [2217](https://codeforces.com/contest/2217) |
| **Problem** | [2217B — Flip the Bit (Easy Version)](https://codeforces.com/contest/2217/problem/B) |
| **Rating** | 1000 |
| **Tags** | greedy, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.5 seconds | 256 megabytes |

---

**This is the easy version of the problem. The difference between the versions is that in this version, there is exactly one special index (`k=1`). You can hack only if you solved all versions of this problem.** 

You are given a binary array `a` of length `n` and `k` **special indices** `p_1, p_2, …, p_k` (`1 ≤ p_i ≤ n`). It is given that the values `a_i` of all elements at special indices are the same (i. e., `a_p_1 = a_p_2 = … = a_p_k`).

In one operation, you can choose a range `[l, r]` (`1 ≤ l ≤ r ≤ n`) such that the range contains **at least** one special index (`l ≤ p_i ≤ r`) and flip all bits `a_j` for `l ≤ j ≤ r`. Flipping a bit changes `0` to `1` and `1` to `0`.

Let `x` denote the value at special indices **before any operations are applied**. Find the minimum number of operations required to make all elements of the array **equal to** `x`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10^4`). The description of the test cases follows. 

The first line of each test case contains two integers `n` and `k` (`1 ≤ n ≤ 2 · 10^5`; `k=1`) — the length of the array and the number of special indices.

The second line contains `n` integers `a_1, a_2, …, a_n` (`0 ≤ a_i ≤ 1`) — the elements of the array.

The third line contains `k` integers `p_1, p_2, …, p_k` (`1 ≤ p_1 < p_2 < … < p_k ≤ n`) — the special indices. It is guaranteed that `a_p_1 = a_p_2 = … = a_p_k`.

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10^5`.

## Output

For each test case, output a single integer — the minimum number of operations required.

## Examples

**Example:**

```
4
3 1
0 1 0
2
5 1
1 1 1 1 1
1
6 1
0 1 0 1 0 1
3
17 1
0 1 1 0 1 1 0 1 0 0 1 0 1 0 1 0 1
5
```

**Output:**

```
2
0
4
10
```

## Note

For the first test case, you can choose the range `[1, 3]` and flip all the bits to get `[1, 0, 1]`. Then you can choose the range `[2, 2]` and flip the second bit to get `[1, 1, 1]`.

For the second test case, all the bits already match the value at the special index. You do not need any operations.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2217/problem/B)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
