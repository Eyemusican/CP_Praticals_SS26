# Problem 2 - Reverse the Array

## Problem Summary
Given N integers stored in an array, print all elements in reverse order from last to first.

## Algorithm Explanation
1. Read the value of N from input
2. Create a vector of size N to store the integers
3. Read N integers and store them in the vector
4. Traverse the vector from the last index (n-1) to the first index (0) using a decrementing loop
5. Print each element during the reverse traversal

## Time Complexity Analysis
- **O(n)** where n is the number of elements
- Reading input: O(n)
- Printing in reverse: O(n)
- Overall: O(n)

## Space Complexity Analysis
- **O(n)** for storing N integers in the vector
- No additional space is required for reversal as we're just printing in reverse order

## Reflection
This problem taught me about reverse traversal of arrays using indices. Instead of actually reversing the array in memory (which would take O(n) time and potentially modify the original data), I simply iterated from the end to the beginning. This is more efficient when you only need to process elements in reverse order once. I could also use `reverse()` function or reverse iterators, but simple index-based traversal is clearest for this problem.


![alt text](image-1.png)