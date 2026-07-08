# Implement a Stack Using an Array

## Problem Statement

Implement a stack using an array and perform the following operations:

* **Push**: Insert an element onto the stack.
* **Pop**: Remove the top element from the stack.
* **Peek**: Display the top element of the stack.
* **Display**: Print all the elements of the stack from top to bottom.

If the stack is full, print `"Stack Overflow"`. If the stack is empty, print `"Stack Underflow"`.

### Input

The first line contains an integer `N`, the number of operations.

Each of the next `N` lines contains one of the following commands:

* `1 X` → Push `X` onto the stack.
* `2` → Pop the top element.
* `3` → Print the top element.
* `4` → Display the stack.

### Output

Print the result of each operation as required.

### Constraints

* `1 ≤ N ≤ 100`
* `-10^9 ≤ X ≤ 10^9`
* Maximum stack size = `100`

### Example

**Input**

```text
8
1 10
1 20
1 30
4
3
2
3
4
```

**Output**

```text
30 20 10
30
20
20 10
```

