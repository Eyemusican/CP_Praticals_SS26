# Problem 4 - Sliding Window Maximum

## Problem Summary
Given an array of N integers and a window size K, find the maximum element in every consecutive window of size K as it slides from left to right through the array.

## Algorithm Explanation
1. Use a deque to store indices of array elements in decreasing order of their values
2. For each element in the array:
   - Remove indices from front if they are outside the current window (i - k)
   - Remove indices from back if their corresponding values are smaller than current element (maintaining decreasing order)
   - Add current element's index to the back
   - If we've processed at least k elements, the front of deque contains the index of maximum element in current window
3. Store and print all window maximums

The deque maintains indices of potentially useful elements in decreasing order of values, ensuring the front always has the maximum.

## Time Complexity Analysis
- **O(n)** where n is the number of elements
- Each element is added to deque once: O(n)
- Each element is removed from deque at most once: O(n)
- Overall: O(n) - linear time for n windows

## Space Complexity Analysis
- **O(k)** for the deque storing at most k indices at any time
- **O(n-k+1)** for storing the result
- Overall: O(n)

## Reflection
This problem helped me understand how a deque can maintain a sliding window maximum efficiently. Initially I considered a brute force approach O(n*k) that would check all k elements in each window, but using a deque the complexity reduced to O(n). The key insight is maintaining a monotonic decreasing deque by removing smaller elements from the back - they can never be the maximum while a larger element exists before them in the window. This is a classic optimization technique for sliding window problems.


![alt text](image-3.png)