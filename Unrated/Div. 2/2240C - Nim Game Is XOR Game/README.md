# C. Nim Game Is XOR Game

| Field | Value |
|---|---|
| **Contest** | [2240](https://codeforces.com/contest/2240) |
| **Problem** | [2240C — Nim Game Is XOR Game](https://codeforces.com/contest/2240/problem/C) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 203 ms |
| **Memory** | 4100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

**Hacks are disabled in this problem.**

Alice and Bob are playing a game with an array `a` consisting of `n` non-negative integers. Alice goes first.

In each turn, the current player must choose an array of `n` non-negative integers `b = [b_1, b_2, …, b_n]` that satisfies the following conditions:

 - `0 ≤ b_i ≤ a_i` for all `1 ≤ i ≤ n`;
- `Σ_i=1^n b_i > 0` (i.e. the array `b` does not consist entirely of zeros);
- `b_1 ⊕ b_2 ⊕ … ⊕ b_n = 0`, where `⊕` denotes the bitwise XOR operation.

After choosing the array `b`, the player updates the array `a` by performing `a_i arrow a_i - b_i` for all `1 ≤ i ≤ n`.

The player who cannot perform such an operation loses the game.

Determine the number of valid choices for the array `b` that Alice can make on her first turn to guarantee a win, assuming both players play optimally. Since this number may be large, output the answer modulo `998 244 353`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10^4`). The description of the test cases follows.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 10^6`) — the length of the array `a`.

The second line of each test case contains `n` integers `a_1, a_2, …, a_n` (`1 ≤ a_i < 2^30`) — the contents of the array `a`

It is guaranteed that the sum of `n` over all test cases does not exceed `10^6`.

## Output

For each test case, output the number of valid choices for the array `b` that Alice can make on her first turn to guarantee a win modulo `998 244 353`.

## Examples

**Example:**

```
5
1
1
2
1 2
5
1 4 5 2 6
1
1073741823
3
1 2 3
```

**Output:**

```
0
1
3
0
1
```

## Note

In the first test case, Alice must choose an array `b` of length `1`. The conditions require `b_1 ≤ a_1`, `b_1 > 0`, and `b_1 = 0`. It is impossible to satisfy `b_1 > 0` and `b_1 = 0` simultaneously. Thus, Alice has no valid moves and loses immediately. The answer is `0`.

In the second test case, `a = [1, 2]`. Alice must choose `b = [b_1, b_2]`. The condition `b_1 ⊕ b_2 = 0` implies that `b_1 = b_2`. Since `0 ≤ b_1 ≤ 1` and `0 ≤ b_2 ≤ 2`, and the array `b` cannot consist entirely of zeros, the only valid choice is `b = [1, 1]`. If Alice chooses `b = [1, 1]`, the array updates to `a = [1-1, 2-1] = [0, 1]`. Now it is Bob's turn. Similar to Alice's situation, Bob must choose `b'` such that `b'_1 = b'_2`. Since `a_1 = 0`, he is forced to pick `b'_1 = 0`, which means `b'_2 = 0`. Since a valid move must have `Σ b'_i > 0`, Bob has no valid moves and loses. Therefore, `b = [1, 1]` is a winning move for Alice, and the answer is `1`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2240/problem/C)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
