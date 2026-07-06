# Merge Two Sorted Arrays

## Problem Statement

Given two sorted arrays of sizes `N` and `M`, merge them into a single sorted array.

### Input

* The first line contains two integers `N` and `M`.
* The second line contains `N` space-separated integers representing the first sorted array.
* The third line contains `M` space-separated integers representing the second sorted array.

### Output

Print the merged sorted array.

### Constraints

* `1 ≤ N, M ≤ 10^5`
* `-10^9 ≤ Array[i] ≤ 10^9`
* Both input arrays are sorted in non-decreasing order.

### Example

**Input**

```text
5 4
1 3 5 7 9
2 4 6 8
```

**Output**

```text
1 2 3 4 5 6 7 8 9
```

### Explanation

Both arrays are already sorted. Merge them while maintaining the sorted order.

