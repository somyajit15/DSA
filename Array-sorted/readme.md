# Check if an Array is Sorted

## Problem Statement

Given an array of `N` integers, determine whether the array is sorted in non-decreasing order.

Print `"Sorted"` if the array is sorted; otherwise, print `"Not Sorted"`.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers.

### Output

Print `Sorted` if the array is in non-decreasing order, otherwise print `Not Sorted`.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Array[i] ≤ 10^9`

### Example 1

**Input**

```text
5
1 2 3 4 5
```

**Output**

```text
Sorted
```

### Example 2

**Input**

```text
5
1 3 2 4 5
```

**Output**

```text
Not Sorted
```

### Explanation

An array is considered sorted if every element is less than or equal to the element that follows it.

