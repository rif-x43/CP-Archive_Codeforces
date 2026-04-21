# B. Alternating String
| Field | Value |
|---|---|
| **Contest** | [2225](https://codeforces.com/contest/2225)|
| **Problem** | [2225B— Alternating String](https://codeforces.com/contest/2225/problem/B)|
| **Rating** | Gym/Unrated|
| **Tags** | N/A|
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2)|
| **Runtime** | 31ms |
| **Memory** | 100KB |
---
| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds| 512 megabytes|

---

Let us call a string $t$ *alternating* if for every $i$ from $1$ to $n−1$, the condition $ti≠ti+1$ holds.

You are given a string $s$ consisting only of the letters "`a`" and/or "`b`". You may perform the following operation on it **at most once**:

 - choose a substring $slsl+1…sr$ consisting of at least one character;
- after choosing the substring, you may invert all letters in it, that is, change every "`a`" to "`b`" and every "`b`" to "`a`" (you are allowed to do it, but you don't have to do it);
- reverse the chosen substring, that is, transform the string $s1s2…sl−1slsl+1…srsr+1…sn$ into $s1s2…sl−1srsr−1…slsr+1…sn$.

Note that when performing such an operation, you are not required to do the second step. For example, for the string $s=$"`ababbab`", after one operation you can obtain "`abababa`" by choosing the substring $s5s6s7$ and doing the second step, or "`bababab`" by choosing the substring $s1s2s3s4$ and not doing the second step. However, you always have to perform the third step of the operation. 

Your task is to determine whether it is possible to obtain any *alternating* string from the string $s$.

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1≤t≤104$). The description of the test cases follows. 

Each test case consists of one line containing one string $s$ ($2≤|s|≤2⋅105$). The string consists only of lowercase Latin letters "`a`" and/or "`b`".

Additional constraints on the input: 

 - the sum of string lengths over all test cases does not exceed $2⋅105$.

## Output

For each test case, output one of the following:

 - `YES`, if it is possible to obtain an *alternating* string from $s$;
- `NO` otherwise.

You may output each letter in any case.

## Examples

**Example:**

```
8
abbaba
aaaaa
bababba
ab
abbaabba
bbb
ababa
aabb
```

**Output:**

```
YES
NO
YES
YES
NO
YES
YES
YES
```

## Note

In the first example, you can choose the substring $s3s4s5s6$ and skip the second step; then you get the string "`ababab`".

In the third example, you can choose the substring $s1s2s3s4s5$ and perform the second step; then you get the string "`abababa`".

In the fourth example, the string is already alternating.

In the sixth example, you can choose the substring $s2$ and perform the second step; then you get the string "`bab`".

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2225/problem/B)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
