# Interleave the First Half of a Queue with the Second Half

## Problem Statement

Given a queue of **even** size `N`, interleave the first half of the queue with the second half.

Print the resulting queue after interleaving.

### Input

* The first line contains an integer `N` (always even).
* The second line contains `N` space-separated integers.

### Output

Print the queue after interleaving.

### Constraints

* `2 ≤ N ≤ 10^5`
* `N` is even.
* `-10^9 ≤ Queue[i] ≤ 10^9`

### Example

**Input**

```text
8
11 12 13 14 15 16 17 18
```

**Output**

```text
11 15 12 16 13 17 14 18
```

### Explanation

The queue is divided into two halves:

* First Half: `11 12 13 14`
* Second Half: `15 16 17 18`

After interleaving:

`11 15 12 16 13 17 14 18`

