# Move All Zeros to the End

## Problem Statement

Given an array of `N` integers, move all the zeros to the end of the array while maintaining the relative order of the non-zero elements.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers.

### Output

Print the modified array after moving all zeros to the end.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Array[i] ≤ 10^9`

### Example

**Input**

```text
5
0 1 0 3 12
```

**Output**

```text
1 3 12 0 0
```

### Explanation

The non-zero elements `1`, `3`, and `12` remain in their original order, while all zeros are moved to the end of the array.

