# Product of Array Except Self

## Problem Statement

Given an array of `N` integers, construct a new array such that each element at index `i` is equal to the product of all the elements of the original array except the element at index `i`.

You are **not allowed to use the division operator**.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers.

### Output

Print the resulting array.

### Constraints

* `2 ≤ N ≤ 10^5`
* `-30 ≤ Array[i] ≤ 30`
* The product of any prefix or suffix fits in a 32-bit integer.

### Example

**Input**

```text
4
1 2 3 4
```

**Output**

```text
24 12 8 6
```

### Explanation

* Product except `1` = `2 × 3 × 4 = 24`
* Product except `2` = `1 × 3 × 4 = 12`
* Product except `3` = `1 × 2 × 4 = 8`
* Product except `4` = `1 × 2 × 3 = 6`

