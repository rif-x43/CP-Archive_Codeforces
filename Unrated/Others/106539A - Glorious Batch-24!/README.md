# A. Glorious Batch-24!

| Field | Value |
|---|---|
| **Contest** | [106539](https://codeforces.com/contest/106539) |
| **Problem** | [106539A — Glorious Batch-24!](https://codeforces.com/contest/106539/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Batch-24 is hosting a "Pre-IUT Meetup" at Smashed Burgers. As part of the registration process, the organizers created registration forms with unique form IDs starting from `1` and increasing sequentially.

When registration ended, the organizers found that the number of submissions greatly exceeded the actual number of students in their batch. After the investigation, they discovered that impostors from other batches had also filled out the forms. They examined a few impostor entries and were relieved to find a pattern. An entry is made by an impostor if for the form ID `x`, `x^2 - 1 is divisible by 24 i.e., (x^2 - 1) ≡ 0 (mod 24).`

Your task is to count the total number of impostors among the first `N` form submissions to maintain the Glory of 24!

## Input

The first line of the input contains a single integer `T` (`1 ≤ T ≤ 10^5`) — the number of test cases.

Each test case consists of a single line containing a single integer `N` (`1 ≤ N ≤ 10^18`) — the total number of forms submitted.

## Output

For each test case, output a single integer in a line — the number of impostors.

## Examples

**Example:**

```
4
1
9
13456
100000000
```

**Output:**

```
1
3
4485
33333333
```

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/106539/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
