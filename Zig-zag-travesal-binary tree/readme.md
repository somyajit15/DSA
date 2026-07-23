# Zigzag Level Order Traversal of a Binary Tree

## Problem Statement

Given the root of a binary tree, print its nodes in **zigzag level order**.

In zigzag traversal:

* The first level is traversed from left to right.
* The second level is traversed from right to left.
* The third level is traversed from left to right.
* Continue alternating the direction for each level.

### Input

* The first line contains an integer `N`, the number of nodes.
* The next `N` integers represent the binary tree in level-order, where `-1` denotes a missing node.

### Output

Print the zigzag level order traversal of the binary tree.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Node Value ≤ 10^9`

### Example

**Input**

```text
7
1 2 3 4 5 6 7
```

**Output**

```text
1 3 2 4 5 6 7
```

### Explanation

The tree is:

```text
        1
      /   \
     2     3
    / \   / \
   4  5  6   7
```

* Level 1 (Left → Right): `1`
* Level 2 (Right → Left): `3 2`
* Level 3 (Left → Right): `4 5 6 7`

Hence, the output is:

`1 3 2 4 5 6 7`

