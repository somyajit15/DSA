# Sort a Stack Using Another Stack

## Problem Statement

Given a stack of `N` integers, sort the stack in **ascending order** using only one additional stack.

The top of the sorted stack should contain the smallest element.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers representing the stack elements from **bottom to top**.

### Output

Print the elements of the sorted stack from **top to bottom**.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Stack[i] ≤ 10^9`

### Example

**Input**

```text
5
34 3 31 98 92
```

**Output**

```text
3 31 34 92 98
```

### Explanation

The original stack is sorted using an auxiliary stack so that the smallest element appears at the top.

