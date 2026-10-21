# THE CORE IDEA

* **Instead of recalculating values for every possible subarray or substring from scratch (which leads to a slow O($N^2$) brute force solution), the `sliding window` maintains a running `window`(a subset of elements) that slides across data structure. As the window moves, you just `add` the new element entering the right side and `remove` the old element leaving the left side. This drops the complexity down to O($N$).**


## HOW TO SPOT A SLIDING WINDOW PATTERN?
Look for these `keywords` in the problem statements:
* *`Contiguous` elements (subarray or substring).*
* *`longest`,`shortest`, or `maximum/minimum` (e.g., longest substring, max sum subarray  of size K).*
* *Conditions involving a target value, a limit on unique characters, or a fixed window size $K$.*

## THE TWO MAIN FACTORS

### TYPE 1: FIXED WINDOW SIZE ($K$)
The problem explicitly gives you a window size $K$.
**SOLUTION:** Build the window for the first $K$ elements. Then, loop through the rest of the array: add the element at index `i`, remove the element at `i-k`.

### TYPE 2: DYNAMIC WINDOW SIZE (Variable)
The window size is not fixed; instead, it expands & shrinks based on specific conditions.
**SOLUTION:** 
1. Expand the right pointer($right$) to include elements into the window.
2. While the window violates the problem condition, shrink the window by moving the left pointer($left$) forward.
3. Keep track of the valid window size or result at each step.