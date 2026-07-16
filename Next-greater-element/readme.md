# Next Greater Element

## Problem Statement

Given an array of `N` integers, find the **Next Greater Element (NGE)** for every element in the array.

The Next Greater Element of an element is the first greater element that appears to its right. If no such element exists, print `-1` for that element.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers.

### Output

Print the Next Greater Element for each element in the array.

### Constraints

* `1 ≤ N ≤ 10^5`
* `-10^9 ≤ Array[i] ≤ 10^9`

### Example

**Input**

```text
5
4 5 2 25 7
```

**Output**

```text
5 25 25 -1 -1
```

### Explanation

* Next greater element of `4` is `5`.
* Next greater element of `5` is `25`.
* Next greater element of `2` is `25`.
* `25` has no greater element to its right.
* `7` has no greater element to its right.

