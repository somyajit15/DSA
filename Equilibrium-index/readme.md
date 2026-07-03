# Find the Equilibrium Index

## Problem Statement

Given an array of `N` integers, find the equilibrium index of the array.

An equilibrium index is an index such that the sum of all elements to its left is equal to the sum of all elements to its right.

If no such index exists, print `-1`.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers.

### Output

Print the equilibrium index. If there are multiple equilibrium indices, print the first one.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Array[i] ≤ 10^9`

### Example

**Input**

```text
5
1 3 5 2 2
```

**Output**

```text
2
```

### Explanation

For index `2`:

* Left sum = `1 + 3 = 4`
* Right sum = `2 + 2 = 4`

Since both sums are equal, the equilibrium index is `2`.

