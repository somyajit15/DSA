# Find the Leaders in an Array

## Problem Statement

Given an array of `N` integers, find all the leader elements in the array.

A leader is an element that is greater than or equal to all the elements to its right. The rightmost element is always a leader.

Print all the leaders in the order they appear in the array.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers.

### Output

Print all the leader elements separated by spaces.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Array[i] ≤ 10^9`

### Example

**Input**

```text
6
16 17 4 3 5 2
```

**Output**

```text
17 5 2
```

### Explanation

* `17` is greater than every element to its right.
* `5` is greater than `2`.
* `2` is the last element, so it is always a leader.

