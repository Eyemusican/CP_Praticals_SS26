# Problem 1 - Dynamic Array Basics

## Problem Summary
Read N integers into a dynamic container (vector) and compute the maximum element, minimum element, and sum of all elements.

## Algorithm Explanation
1. Read the value of N from input
2. Create a vector of size N to store the integers
3. Read N integers and store them in the vector
4. Use `max_element()` to find the maximum value in the vector
5. Use `min_element()` to find the minimum value in the vector
6. Iterate through the vector to calculate the sum of all elements
7. Print all three results

## Time Complexity Analysis
- **O(n)** where n is the number of elements
- Reading input: O(n)
- Finding max element: O(n)
- Finding min element: O(n)
- Computing sum: O(n)
- Overall: O(n) as all operations are linear

## Space Complexity Analysis
- **O(n)** for storing N integers in the vector
- No additional space proportional to input size is used

## Reflection
This problem introduced me to using vectors in C++, which are dynamic arrays that can grow or shrink in size. I learned how to use STL functions like `max_element()` and `min_element()` which make finding extremes very efficient and clean. Using vectors is much better than traditional arrays as they handle memory management automatically and provide useful methods for common operations.


![alt text](image.png)