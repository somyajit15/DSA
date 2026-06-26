# Check if Two Arrays are Equal

## Problem Statement

Given two arrays of size `N`, determine whether both arrays are identical. Two arrays are considered equal if they have the same size and all corresponding elements are equal.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers representing the first array.
* The third line contains `N` space-separated integers representing the second array.

### Output

Print `Equal` if both arrays are identical; otherwise, print `Not Equal`.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Array[i] ≤ 10^9`

### Example 1

**Input**

```text
5
1 2 3 4 5
1 2 3 4 5
```

**Output**

```text
Equal
```

### Example 2

**Input**

```text
5
1 2 3 4 5
1 2 4 4 5
```

**Output**

```text
Not Equal
```

### Explanation

Compare the elements of both arrays one by one. If every corresponding element matches, the arrays are equal.

