# K. Power of Friendship

| Field | Value |
|---|---|
| **Contest** | [106539](https://codeforces.com/contest/106539) |
| **Problem** | [106539K — Power of Friendship](https://codeforces.com/contest/106539/problem/K) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

In an advanced material science lab, researchers are studying the crystal structure of alkali metals, such as sodium and potassium. These metals form a body-centered cubic (BCC) lattice, which is a repeating three-dimensional arrangement of atoms.

In a BCC lattice, each unit cell consists of one atom at the center of the cube and eight atoms at the corners of the cube. Each corner atom is shared by eight adjacent unit cells.

 ![](https://espresso.codeforces.com/b6d5018c0f7f2005db04500e727e26ef1999f245.png) The domain of an atom is the region where its force strength is stronger than that of any other atom. In other words, the domain of an atom is the set of points that are closer to that atom than any other atom.

Your task is to calculate the volume of the domain of a center atom of a BCC lattice given its lattice spacing (side length of the unit cells) as a fraction `p/q`.

## Input

The first line of the input contains an integer `t \: (1 ≤ t ≤ 100)` — the number of test cases.

Each test case consists of a single line containing two space-separated integers `p` and `q \:(1 ≤ p, q ≤ 100)` — the numerator and the denominator of the fraction representing the lattice spacing.

## Output

For each test case, output a single number in a line — the volume of the domain of a center atom.

The answer will be considered correct if the absolute error does not exceed `10^-6`.

## Examples

**Example:**

```
2
7 3
15 4
```

**Output:**

```
6.351852
26.367188
```

## Note

The domain of the center atom in a unit cell is illustrated in the following figure:

 ![](https://espresso.codeforces.com/e951a5bd536668cf10581a5fe9ad6f6a6efd8ed6.png)

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/106539/problem/K)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
