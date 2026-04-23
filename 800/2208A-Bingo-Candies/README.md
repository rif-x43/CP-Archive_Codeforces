# A. Bingo Candies
| Field | Value |
|---|---|
| **Contest** | [2208](https://codeforces.com/contest/2208)|
| **Problem** | [2208A— Bingo Candies](https://codeforces.com/contest/2208/problem/A)|
| **Rating** | 800|
| **Tags** | constructive algorithms,math|
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2)|
| **Runtime** | 31ms |
| **Memory** | 0KB |
---
| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second| 256 megabytes|

---

Alice has a magic board. The board is described as a $n×n$ grid; each tile has a colored candy in it. The color of the candy in the $i$-th row, $j$-th column is $ai,j$. 

Bob wants to know if he can rearrange the board in some way so that no row or column consists of $n$ candies of the same color. 

Your task is to determine whether such a rearrangement exists.

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1≤t≤500$). The description of the test cases follows. 

The first line of each test case contains an integer $n$ ($1≤n≤100$), denoting the size of the board.

The following $n$ lines contain $n$ integers each; the $j$-th integer on the $i$-th line is $ai,j$ ($1≤ai,j≤n2$), denoting the color of candies on the board.

It is guaranteed that the sum of $n$ over all test cases does not exceed $500$.

## Output

For each test case, print "`YES`" if a valid rearrangement exists, and "`NO`" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Examples

**Example:**

```
3
3
1 2 3
3 1 4
4 1 2
3
1 1 1
2 3 4
1 4 3
3
1 1 1
1 1 1
1 1 2
```

**Output:**

```
YES
YES
NO
```

## Note

In the first test case, no row or column consists of all candies with the same color; the board can be left as it is.

In the second test case, the first row consists of all candies of color $1$. The board can be rearranged by swapping $a1,1$ with $a2,1$. After the rearrangement, the board becomes $211134143$ Now no row or column consists of all candies with the same color.

In the third test case, no matter how the board is rearranged, there will always be at least one row or column consisting of all candies of color $1$. Therefore, there is no valid rearrangement.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2208/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
