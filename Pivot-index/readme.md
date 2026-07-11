# Find the Pivot Index

## Problem Statement

Given an array of `N` integers, find the pivot index of the array.

A pivot index is an index where the sum of all elements to the left is equal to the sum of all elements to the right.

If multiple pivot indices exist, print the first one. If no pivot index exists, print `-1`.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers.

### Output

Print the pivot index.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Array[i] ≤ 10^9`

### Example

**Input**

```text
6
1 7 3 6 5 6
```

**Output**

```text
3
```

### Explanation

At index `3`:

* Left sum = `1 + 7 + 3 = 11`
* Right sum = `5 + 6 = 11`

Since both sums are equal, the pivot index is `3`.

