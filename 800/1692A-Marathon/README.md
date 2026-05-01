# A. Marathon
| Field | Value |
|---|---|
| **Contest** | [1692](https://codeforces.com/contest/1692)|
| **Problem** | [1692A— Marathon](https://codeforces.com/contest/1692/problem/A)|
| **Rating** | 800|
| **Tags** | implementation|
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2)|
| **Runtime** | 46ms |
| **Memory** | 0KB |
---
| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second| 256 megabytes|

---

You are given four **distinct** integers $$, $$, $$, $$. 

Timur and three other people are running a marathon. The value $$ is the distance that Timur has run and $$, $$, $$ correspond to the distances the other three participants ran. 

Output the number of participants in front of Timur.

## Input

The first line contains a single integer $$ ($$) — the number of test cases.

The description of each test case consists of four **distinct** integers $$, $$, $$, $$ ($$).

## Output

For each test case, output a single integer — the number of participants in front of Timur.

## Examples

**Example:**

```
4
2 3 4 1
10000 0 1 2
500 600 400 300
0 9999 10000 9998
```

**Output:**

```
2
0
1
3

```

## Note

For the first test case, there are $$ people in front of Timur, specifically the participants who ran distances of $$ and $$. The other participant is not in front of Timur because he ran a shorter distance than Timur.

For the second test case, no one is in front of Timur, since he ran a distance of $$ while all others ran a distance of $$, $$, and $$ respectively.

For the third test case, only the second person is in front of Timur, who ran a total distance of $$ while Timur ran a distance of $$.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1692/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
