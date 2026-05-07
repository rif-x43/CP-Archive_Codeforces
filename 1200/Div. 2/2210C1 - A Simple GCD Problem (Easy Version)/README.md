# C1. A Simple GCD Problem (Easy Version)

| Field | Value |
|---|---|
| **Contest** | [2210](https://codeforces.com/contest/2210) |
| **Problem** | [2210C1 — A Simple GCD Problem (Easy Version)](https://codeforces.com/contest/2210/problem/C1) |
| **Rating** | 1200 |
| **Tags** | greedy, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 125 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 512 megabytes |

---

**This is the easy version of the problem. The difference between the versions is that in this version, `1 ≤ n ≤ 2 · 10^5` and `b_i = a_i` for `1 ≤ i ≤ n`. Note that a solution for one version does not necessarily solve the other version. You can hack only if you solved all versions of this problem.** 

You are given two arrays `a` and `b` of length `n`.

For **each index** `i` (`1 ≤ i ≤ n`) of array `a`, you can perform the following operation **at most once**: 

 - choose an arbitrary integer `m` (`m ≠ a_i`) such that `1 ≤ m ≤ b_i`, and set `a_i := m`.

Let the array after performing all the operations be `a'`. You can only perform operations in such a way that the following condition holds: 

 - for all `1≤ l < r≤ n`, `gcd(a_l,a_l+1,…,a_r)=gcd(a'_l,a'_l+1,…,a'_r).`

Here, `gcd(x, y)` denotes the greatest common divisor (GCD) of integers `x` and `y`.  

 You have to determine the **maximum** number of operations that can be performed while ensuring that the condition remains satisfied.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10^4`). The description of the test cases follows. 

The first line of each test case contains an integer `n` (`2 ≤ n ≤ 2· 10^5`) — the length of `a`.

The following line of each test case contains `n` space-separated integers `a_1, a_2, …, a_n` (`1 ≤ a_i ≤ 10^9`).

The next line of each test case contains `n` space-separated integers `b_1, b_2, …, b_n` (`colorredb_i = a_i`).

It is guaranteed that the sum of `n` over all test cases does not exceed `2·10^5`.

## Output

For each test case, output the maximum number of operations that can be done on a newline.

## Examples

**Example:**

```
4
7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
3
67 67 67
67 67 67
6
8 10 10 12 12 14
8 10 10 12 12 14
8
2 4 8 16 32 64 128 256
2 4 8 16 32 64 128 256
```

**Output:**

```
6
0
2
1
```

## Note

For the first test case, the GCD of all subarrays is `1`. Hence, we can perform `6` operations and change the array to `a' = [1, 1, 1, 1, 1, 1, 1]`. It can be shown that the maximum number of operations that can be performed in this case is `6`.

For the second test case, note that all the values are equal, and reducing any value causes the GCD of subarrays to decrease. Hence, `0` operations can be performed.

For the third test case, it can be shown that at most `2` operations can be performed.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2210/problem/C1)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
