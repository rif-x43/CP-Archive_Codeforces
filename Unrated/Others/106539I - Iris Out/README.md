# I. Iris Out

| Field | Value |
|---|---|
| **Contest** | [106539](https://codeforces.com/contest/106539) |
| **Problem** | [106539I — Iris Out](https://codeforces.com/contest/106539/problem/I) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Denji and Reze went to explore a school building at night. The building has `4` rooms arranged in a `2 × 2` grid. Each room contains a light bulb, but the electrical system is malfunctioning.

Each room has a switch, but the switches are broken. Pressing the switch in a room does not affect the light in that room. Instead, it **toggles the lights in the two adjacent rooms**, namely the rooms directly above, below, to the left, or to the right. Toggling a light means changing its state from ON to OFF, or OFF to ON.

Reze asked Denji to turn all the lights OFF. Denji can press any switch any number of times and in any order. Given the initial state of the lights, determine whether it is possible for him to turn all the lights OFF at the same time.

## Input

The first line of the input contains a single integer `t` (`1 ≤ t ≤ 30`) — the number of test cases.

Each test case consists of two lines, each containing exactly two characters. These two lines represent the two rows of the `2 × 2` grid of rooms. For each character, a value of `0` means that the light in the corresponding room is initially OFF, and a value of `1` means that the light in the corresponding room is initially ON.

## Output

For each test case, output `"YES"` if it is possible to turn all the lights OFF at the same time, `"NO"` otherwise.

You can output the answer in any case (upper or lower). For example, the strings `"yEs"`, `"yes"`, `"Yes"`, and `"YES"` will be recognized as positive responses.

## Examples

**Example:**

```
4
00
00
11
11
01
00
10
01
```

**Output:**

```
YES
YES
NO
YES
```

## Note

In the first test case, all the lights are already OFF.

The following is the illustration of the second test case. The blue highlight indicates the next switch to be pressed.

 ![](https://espresso.codeforces.com/3e00bc1796e2b212fd0bdbbabd9f762569be11ec.png) It can be proven that it is not possible to turn all the lights OFF at the same time in the third test case.

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/106539/problem/I)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
