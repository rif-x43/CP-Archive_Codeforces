# A. Disturbing Distribution

| Field | Value |
|---|---|
| **Contest** | [2226](https://codeforces.com/contest/2226) |
| **Problem** | [2226A — Disturbing Distribution](https://codeforces.com/contest/2226/problem/A) |
| **Rating** | Gym/Unrated |
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

You are given an array `[a_1, a_2, …, a_n]`. You wish to make the array empty by performing the following operation any number of times:

 - Select any sequence of indices `1 ≤ i_1 < i_2 < … < i_k ≤ |a|` (note that `|a|` denotes the current length of the array `a`) such that `a_i_1 ≤ a_i_2 ≤ … ≤ a_i_k`
- Remove the elements `a_i_1, a_i_2, …, a_i_k` from the array `a`.
- This operation incurs a cost equal to `a_i_1 × a_i_2 × ·s × a_i_k`.

Determine the **minimum** total cost required to remove all the elements from the array `a`. Note that the total cost is equal to the sum of costs incurred over all the operations performed.

As the answer can be very large, report the answer modulo `676 767 677`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 500`). The description of the test cases follows. 

The first line of each testcase contains a single integer `n` (`1 ≤ n ≤ 100`) — the length of the array `a`.

The second line of each testcase contains `n` integers `a_1, a_2, …, a_n` (`1 ≤ a_i ≤ 100`) — the elements of the array.

## Output

For each testcase, output a single integer — the minimum total cost required to make the array `a` empty.

As the answer may be large, output the answer modulo `676 767 677`.

## Examples

**Example:**

```
3
5
1 2 1 2 3
3
3 2 1
4
1 1 1 1
```

**Output:**

```
7
6
1
```

## Note

For the first testcase,

 

- **Operation 1**: Choose `i_1 = 1`, `i_2 = 2`, and `i_3 = 4`. This incurs a cost of `1 · 2 · 2 = 4`. After deleting the elements at these indices, the array becomes `a = [1, 3]`.
- **Operation 2**: Choose `i_1 = 1` and `i_2 = 2`. This incurs a cost of `1 · 3 = 3`. After deleting the elements at these indices, the array becomes empty.

Thus, the total cost is equal to `4 + 3 = 7`. It can be shown that this is the minimum possible total cost.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2226/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
