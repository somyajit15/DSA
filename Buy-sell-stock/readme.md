# Best Time to Buy and Sell Stock

## Problem Statement

You are given an array where the `iᵗʰ` element represents the price of a stock on the `iᵗʰ` day.

Find the maximum profit that can be achieved by buying the stock on one day and selling it on a later day.

If no profit can be made, print `0`.

### Input

* The first line contains an integer `N`.
* The second line contains `N` space-separated integers representing the stock prices.

### Output

Print the maximum possible profit.

### Constraints

* `1 ≤ N ≤ 10^5`
* `0 ≤ Price[i] ≤ 10^9`

### Example

**Input**

```text
6
7 1 5 3 6 4
```

**Output**

```text
5
```

### Explanation

Buy the stock on day `2` at price `1` and sell it on day `5` at price `6`.

Profit = `6 - 1 = 5`.

