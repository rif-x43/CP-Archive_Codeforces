# E. AutoCAD Mayhem

| Field | Value |
|---|---|
| **Contest** | [106539](https://codeforces.com/contest/106539) |
| **Problem** | [106539E — AutoCAD Mayhem](https://codeforces.com/contest/106539/problem/E) |
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

It was the first AutoCAD lab for the first-year students at Irony University of Technology.

Labib and his friend Jehad were sitting side by side. The lab task was simple: draw a triangle using the given line measurements. Excited to finish the task quickly, they were racing each other instead of listening to the instructor.

Confident in their abilities, both of them ignored the tutorial completely and drew their own triangles much faster than the others.

A few minutes later, panic struck.

Neither of them remembered the actual measurements from the instructions, so they had no idea whether their drawings were correct. But instead of checking the lab sheet like normal students, they became curious about something much more interesting:

*"By pure luck, did we draw similar triangles?!"*

You are given the three **side lengths** of both triangles. Determine whether the two triangles are **similar***.

*****Two triangles with side lengths `(a, b, c)` and `(d, e, f)` are considered **similar** if there exists a permutation `(x, y, z)` of `(d, e, f)` such that

`displaystyle a/x = b/y = c/z`

## Input

The input consists of a single line containing six space-separated integers `a, b, c, d, e, f` (`1 ≤ a, b, c, d, e, f ≤ 10^9`) — `(a, b, c)` are the **side lengths** of Labib's triangle and `(d, e, f)` are the **side lengths** of Jehad's triangle.

## Output

Output `"YES"` if the triangles are similar, `"NO"` otherwise.

You can output the answer in any case (upper or lower). For example, the strings `"yEs"`, `"yes"`, `"Yes"`, and `"YES"` will be recognized as positive responses.

## Examples

**Example 1:**

```
2 3 4 4 6 8
```

**Output 1:**

```
YES

```

**Example 2:**

```
2 3 4 4 6 7
```

**Output 2:**

```
NO

```

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/106539/problem/E)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
