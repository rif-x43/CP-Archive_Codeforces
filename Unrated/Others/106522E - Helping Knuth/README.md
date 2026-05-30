# E. Helping Knuth

| Field | Value |
|---|---|
| **Contest** | [106522](https://codeforces.com/contest/106522) |
| **Problem** | [106522E — Helping Knuth](https://codeforces.com/contest/106522/problem/E) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 93 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

In the late 1950s, the renowned Bengali mathematician Professor Raj Chandra Bose was working to disprove Euler's long-standing conjecture on Latin Squares at Case Institute of Technology. During his visit, he noticed an exceptional undergraduate student attending his graduate level classes. Impressed by his ability, he invited the student, Donald Knuth, to assist with computational tasks.

As part of this work, Knuth needed to construct a permutation of length `n`, but only a partial version of the permutation is known.

He is given an array `a` of length `n`, where some elements are known and others are missing. Missing elements are represented by `-1`.

Your task is to help Knuth replace each occurrence of `-1` in `a` with a value from `1` to `n` such that:

 - The final array `a` becomes a valid permutation of integers from `1` to `n`.
- The value of the following expression is minimized: `Σ_i=2^n (a_i - a_i-1)`

If multiple valid permutations achieve the minimum value, print any of them.

*Note: A permutation of length `n` is an array of `n` distinct integers from `1` to `n`, each appearing exactly once. For example, `[1]`, `[4, 3, 5, 1, 2]`, and `[3, 2, 1]` are permutations, while `[1, 1]` and `[4, 3, 1]` are not.*

## Input

The first line contains an integer `t` `(1 ≤ t ≤ 10^4)`, the number of test cases. The description of the test cases follows.

For each test case, the first line contains an integer `n` `(2 ≤ n ≤ 2 · 10^5)`, the length of the array.

The second line contains `n` integers `a_1, a_2, …, a_n` `(-1 ≤ a_i ≤ n`, `a_i ≠ 0)`, where `a_i = -1` denotes a missing value.

It is guaranteed that all positive values in `a` are distinct.

The sum of `n` over all test cases does not exceed `2 · 10^5`.

## Output

For each test case, print a single line containing `n` space-separated integers, representing the completed permutation.

If there are multiple valid answers, print any of them.

## Examples

**Example:**

```
2
3
-1 3 -1
5
-1 2 -1 -1 3
```

**Output:**

```
2 3 1 
5 2 4 1 3 
```

## Note

For the first test case, the missing numbers are `{1, 2}`.

We try all valid completions:

 - `[1, 3, 2] ⇒ (3 - 1) + (2 - 3) = 1`
- `[2, 3, 1] ⇒ (3 - 2) + (1 - 3) = -1`

The second permutation gives the minimum value, so the best answer is `[2, 3, 1]`.

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/106522/problem/E)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
