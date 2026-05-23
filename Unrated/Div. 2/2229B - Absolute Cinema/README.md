# B. Absolute Cinema

| Field | Value |
|---|---|
| **Contest** | [2229](https://codeforces.com/contest/2229) |
| **Problem** | [2229B — Absolute Cinema](https://codeforces.com/contest/2229/problem/B) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 78 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.5 seconds | 256 megabytes |

---

You find yourself with two arrays of positive integers `a` and `b`, both of length `n`. You are to perform the following operation any number of times:

 - select an integer `i` (`1 ≤ i ≤ n`) and swap `a_i` and `b_i`.

Determine the maximum value of `max(a) + Σ^n_i = 1b_i` attainable if you perform the operations optimally.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10^4`). The description of the test cases follows. 

The first line of each testcase contains an integer `n` (`1 ≤ n ≤ 10^5`) — the length of the arrays `a` and `b`.

The second line of each testcase contains `n` integers `a_1,a_2,…,a_n` (`1 ≤ a_i ≤ 10^9`).

The third line of each testcase contains `n` integers `b_1,b_2,…,b_n` (`1 ≤ b_i ≤ 10^9`).

It is guaranteed that the sum of `n` over all test cases does not exceed `10^5`.

## Output

For each testcase, output the maximum value of `max(a) + Σ^n_i = 1b_i` attainable.

## Examples

**Example:**

```
4
1
2
1
1
1
2
3
1 2 3
4 5 6
4
2 3 6 7
1 4 5 8
```

**Output:**

```
3
3
18
27
```

## Note

**Test Case 3:** No swaps are required, so the answer is `max([1, 2, 3]) + 4 + 5 + 6 = 3 + 15 = 18`, it can be proven that this is optimal.

**Test Case 4:** You can achieve the maximum by swapping indices `1`, `3` and `4`. So we get: 

 - `a = [1, 3, 5, 8]`
- `b = [2, 4, 6, 7]`

 This gives an answer of `max([1, 3, 5, 8]) + 2 + 4 + 6 + 7 = 8 + 19 = 27`, it can be proven that this is optimal.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2229/problem/B)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
