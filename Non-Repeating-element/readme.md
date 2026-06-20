# First Non-Repeating Element in an Array

## Problem Statement

Given an array of `N` integers, find and print the first element that appears exactly once in the array. If no such element exists, print `-1`.

### Input

* The first line contains an integer `N`, the number of elements in the array.
* The second line contains `N` space-separated integers.

### Output

Print the first non-repeating element. If all elements repeat, print `-1`.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Array[i] ≤ 10^9`

### Example 1

**Input**

```text
6
4 5 1 2 1 2
```

**Output**

```text
4
```

### Example 2

**Input**

```text
5
7 7 8 8 7
```

**Output**

```text
-1
```

### Explanation

In the first example, `4` appears only once and is the first such element in the array.

