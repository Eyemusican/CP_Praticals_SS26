# Problem 3 - Remove Duplicates

## Problem Summary
Given N integers (possibly with duplicates), remove all duplicate values and print only the unique elements in sorted order.

## Algorithm Explanation
1. Read N integers into a vector
2. Sort the vector using `sort()` function - this brings duplicate elements together
3. Use the `unique()` function which removes consecutive duplicate elements and returns an iterator to the new end of unique elements
4. Use `erase()` to remove the duplicate elements from the end of the vector
5. Print all remaining unique elements

## Time Complexity Analysis
- **O(n log n)** where n is the number of elements
- Reading input: O(n)
- Sorting: O(n log n)
- Removing duplicates with unique(): O(n)
- Erasing duplicates: O(n) in worst case
- Printing: O(k) where k is number of unique elements
- Overall: O(n log n) dominated by sorting

## Space Complexity Analysis
- **O(n)** for storing N integers in the vector
- Sorting is typically done in-place with O(log n) recursive stack space
- No additional significant space required

## Reflection
This problem taught me an elegant way to remove duplicates using STL functions. The key insight is that `unique()` only removes consecutive duplicates, so sorting first is essential. Initially, I considered using a set which would automatically handle uniqueness, but the vector + sort + unique approach is more efficient and demonstrates powerful STL algorithm composition. The `unique()` function doesn't actually remove elements but moves them to the end, so `erase()` is needed to truly remove them.


![alt text](image-2.png)