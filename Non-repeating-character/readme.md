# First Non-Repeating Character in a Stream

## Problem Statement

Given a stream of lowercase characters, process the characters one by one and print the first non-repeating character after each insertion.

If there is no non-repeating character, print `#`.

### Input

* A string `S` consisting of lowercase English letters.

### Output

Print a string where the `iᵗʰ` character represents the first non-repeating character after processing the first `i` characters of the stream.

### Constraints

* `1 ≤ |S| ≤ 10^5`
* `S` contains only lowercase English letters.

### Example

**Input**

```text
aabc
```

**Output**

```text
a#bb
```

### Explanation

* Read `a` → First non-repeating = `a`
* Read second `a` → No non-repeating character = `#`
* Read `b` → First non-repeating = `b`
* Read `c` → First non-repeating is still `b`

