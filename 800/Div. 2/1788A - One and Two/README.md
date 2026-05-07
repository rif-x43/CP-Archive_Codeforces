# A. One and Two

| Field | Value |
|---|---|
| **Contest** | [1788](https://codeforces.com/contest/1788) |
| **Problem** | [1788A — One and Two](https://codeforces.com/contest/1788/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given a sequence `a_1, a_2, …, a_n`. Each element of `a` is `1` or `2`.

Find out if an integer `k` exists so that the following conditions are met. 

 - `1 ≤ k ≤ n-1`, and
- `a_1 · a_2 · … · a_k = a_k+1 · a_k+2 · … · a_n`.

If there exist multiple `k` that satisfy the given condition, print the smallest.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 100`). Description of the test cases follows.

The first line of each test case contains one integer `n` (`2 ≤ n ≤ 1000`).

The second line of each test case contains `n` integers `a_1, a_2, …, a_n` (`1 ≤ a_i ≤ 2`).

## Output

For each test case, if there is no such `k`, print `-1`.

Otherwise, print the smallest possible `k`.

## Examples

**Example:**

```
3
6
2 2 1 2 1 2
3
1 2 1
4
1 1 1 1
```

**Output:**

```
2
-1
1

```

## Note

For the first test case, `k=2` satisfies the condition since `a_1 · a_2 = a_3 · a_4 · a_5 · a_6 = 4`. `k=3` also satisfies the given condition, but the smallest should be printed.

For the second test case, there is no `k` that satisfies `a_1 · a_2 · … · a_k = a_k+1 · a_k+2 · … · a_n`

For the third test case, `k=1`, `2`, and `3` satisfy the given condition, so the answer is `1`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1788/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
