# B. Different Distances

| Field | Value |
|---|---|
| **Contest** | [2233](https://codeforces.com/contest/2233) |
| **Problem** | [2233B — Different Distances](https://codeforces.com/contest/2233/problem/B) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 512 megabytes |

---

Construct an array of `4 · n` integers such that:

 - each number `1, 2, …, n` appears in the array exactly `4` times;
- let `p_x, i` be the position of the `i`-th occurrence of number `x` in the array; then, for each `x` from `1` to `n`, the numbers `(p_x, 2 - p_x, 1), (p_x, 3 - p_x, 2), (p_x, 4 - p_x, 3)` must be pairwise distinct.

For example, for `n = 3`, one possible array is `[1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3]`, because:

 - `p_1, 2 - p_1, 1 = 1, p_1, 3 - p_1, 2 = 2, p_1, 4 - p_1, 3 = 3` — all numbers are distinct;
- `p_2, 2 - p_2, 1 = 2, p_2, 3 - p_2, 2 = 4, p_2, 4 - p_2, 3 = 1` — all numbers are distinct;
- `p_3, 2 - p_3, 1 = 2, p_3, 3 - p_3, 2 = 3, p_3, 4 - p_3, 3 = 1` — all numbers are distinct.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 200`). The description of the test cases follows.

The only line of each test case contains one integer `n` (`2 ≤ n ≤ 200`).

## Output

For each test case, output the required array. If there are several suitable arrays, output any of them. It can be shown that at least one suitable array always exists under the constraints of the problem.

## Examples

**Example:**

```
3
3
4
5
```

**Output:**

```
1 1 2 1 2 3 1 3 2 2 3 3
1 4 3 4 4 3 3 1 2 1 2 3 4 2 2 1 
5 3 2 4 1 2 2 4 4 5 3 5 2 1 3 1 5 4 1 3 

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2233/problem/B)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
