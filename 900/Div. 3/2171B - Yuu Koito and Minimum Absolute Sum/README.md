# B. Yuu Koito and Minimum Absolute Sum

| Field | Value |
|---|---|
| **Contest** | [2171](https://codeforces.com/contest/2171) |
| **Problem** | [2171B — Yuu Koito and Minimum Absolute Sum](https://codeforces.com/contest/2171/problem/B) |
| **Rating** | 900 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 78 ms |
| **Memory** | 2000 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

*The words in shoujo manga and love songs... they're always sparkling brightly. I don't need a dictionary to understand the meaning... but I've never felt them for myself.*— Yuu Koito*Yuu is trying out the student council! Unfortunately, she is being forced to do clerical work... Touko wants her to fill out the blanks in various student council documents.*

You are given a partially filled array of nonnegative integers `a_1, a_2, …, a_n`, where blank elements are denoted with `-1`. You would like to fill in the blank elements with nonnegative integers, such that the absolute value of the sum of the elements in its difference array is minimized.

More formally, let `b` be the array of length `n-1` such that `b_i = a_i+1 - a_i` for all `1≤ i≤ n-1`. Find the minimum possible value of `|b_1 + b_2 + … + b_n-1|`, across all possible ways to fill in the blank elements of `a`.

Additionally, output the array that achieves this minimum. If there are multiple such arrays, output the one that is **lexicographically smallest**`^∗`.

`^∗`For two arbitrary arrays `c` and `d` of length `n`, we say that `c` is *lexicographically smaller* than `d` if there exists an index `i` (`1≤ i≤ n`) such that `c_j = d_j` for all `j < i`, and `c_i < d_i`. In other words, `c` and `d` differ in at least one index, and at the first index at which they differ, `c_i` is smaller than `d_i`.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 10^4`)  — the number of test cases.

The first line of each test case contains a single integer `n` (`2≤ n≤ 2· 10^5`).

The second line of each test case contains `n` integers, `a_1, a_2, …, a_n` (`-1≤ a_i ≤ 10^6`).

It is guaranteed that the sum of `n` over all test cases does not exceed `2· 10^5`.

## Output

For each test case, on the first line, output the minimum possible value of `|b_1 + b_2 + … + b_n-1|`. Then, on the second line, output `n` integers, the values of `a_1, a_2, …, a_n` in the lexicographically smallest array achieving this minimum.

## Examples

**Example:**

```
6
4
2 -1 7 1
4
-1 2 4 -1
8
2 -1 1 5 11 12 1 -1
3
-1 -1 -1
3
2 5 4
2
-1 5
```

**Output:**

```
1
2 0 7 1
0
0 2 4 0
0
2 0 1 5 11 12 1 2
0
0 0 0
2
2 5 4
0
5 5
```

## Note

In the first example, we fill in the array `a = [2, 0, 7, 1]`, which yields the difference array `b = [-2, 7, -6]`.

The absolute value of the sum of the elements in `b` is `1`. It can be proven that this is the minimum possible. Furthermore, it can be proven that this is the lexicographically smallest array `a` that achieves this minimum.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2171/problem/B)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
