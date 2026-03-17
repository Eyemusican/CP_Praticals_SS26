# Problem 9 - Count Subsets with Even Sum

## Problem Summary
Given N numbers, count how many subsets have an even sum (including 0 as even, which is the sum of the empty set).

## Algorithm Explanation
1. Use bitmask technique to generate all 2^N possible subsets
2. For each subset (represented by mask from 0 to 2^N - 1):
   - Calculate the sum of elements in that subset
   - Check each bit position: if bit i is set, add arr[i] to sum
3. Check if the sum is even (sum % 2 == 0)
4. Increment counter if sum is even
5. Return the total count

Note: Empty set (mask = 0) has sum = 0, which is even.

## Time Complexity Analysis
- **O(n * 2^n)** where n is the number of elements
- Total subsets to check: 2^n
- For each subset, calculating sum requires checking n bits
- Overall: O(n * 2^n)

## Space Complexity Analysis
- **O(n)** for storing the input array
- O(1) for variables (count, sum)
- Overall: O(n)

## Reflection
This problem builds on the subset generation technique from Problem 8. I learned that bitmask technique is not just for generating subsets but also for computing properties of all subsets efficiently. An interesting observation is that for most inputs, roughly half the subsets will have even sums and half will have odd sums. A more advanced approach could use dynamic programming or mathematical properties to solve this in O(n) time by counting even and odd numbers, but the bitmask approach directly demonstrates the concept and works well for small N (N ≤ 20).


![alt text](image-8.png)