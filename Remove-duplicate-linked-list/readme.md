# Remove Duplicates from a Sorted Linked List

## Problem Statement

Given the head of a **sorted** singly linked list, remove all duplicate nodes so that each element appears only once.

Return the head of the modified linked list.

### Input

* The first line contains an integer `N`, the number of nodes.
* The second line contains `N` space-separated integers in **sorted order**.

### Output

Print the linked list after removing duplicate nodes.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Node Value ≤ 10^9`

### Example

**Input**

```text
8
1 1 2 3 3 4 5 5
```

**Output**

```text
1 2 3 4 5
```

### Explanation

The duplicate nodes (`1`, `3`, and `5`) are removed, leaving only one occurrence of each value.

