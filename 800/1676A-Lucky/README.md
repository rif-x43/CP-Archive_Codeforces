# A. Lucky?
| Field | Value |
|---|---|
| **Contest** | [1676](https://codeforces.com/contest/1676)|
| **Problem** | [1676A— Lucky?](https://codeforces.com/contest/1676/problem/A)|
| **Rating** | 800|
| **Tags** | implementation|
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2)|
| **Runtime** | 31ms |
| **Memory** | 100KB |
---
| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second| 256 megabytes|

---

A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

## Input

The first line of the input contains an integer $$ ($$) — the number of testcases.

The description of each test consists of one line containing one string consisting of six digits.

## Output

Output $$ lines, each of which contains the answer to the corresponding test case. Output "`YES`" if the given ticket is lucky, and "`NO`" otherwise.

You can output the answer in any case (for example, the strings "`yEs`", "`yes`", "`Yes`" and "`YES`" will be recognized as a positive answer).

## Examples

**Example:**

```
5
213132
973894
045207
000000
055776
```

**Output:**

```
YES
NO
YES
YES
NO

```

## Note

In the first test case, the sum of the first three digits is $$ and the sum of the last three digits is $$, they are equal so the answer is "`YES`".

In the second test case, the sum of the first three digits is $$ and the sum of the last three digits is $$, they are not equal so the answer is "`NO`".

In the third test case, the sum of the first three digits is $$ and the sum of the last three digits is $$, they are equal so the answer is "`YES`".

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1676/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
