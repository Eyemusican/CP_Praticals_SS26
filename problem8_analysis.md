# Problem 8 - Subset Generation

## Problem Summary
Given a set of N numbers, generate and print all possible subsets (including empty set and the full set) using bitmask technique.

## Algorithm Explanation
The bitmask technique represents each subset as a binary number:
1. For N elements, there are 2^N possible subsets
2. Iterate through all numbers from 0 to 2^N - 1
3. Each number represents a unique subset:
   - If bit i is set (1) in the number, include element i in the subset
   - If bit i is not set (0), exclude element i
4. For each mask value, check each bit position using bitwise AND operation `(mask & (1 << i))`
5. Print elements corresponding to set bits

Example for {1, 2, 3}:
- mask=0 (000₂) → {} (empty set)
- mask=1 (001₂) → {1}
- mask=2 (010₂) → {2}
- mask=3 (011₂) → {1, 2}
- mask=4 (100₂) → {3}
- etc.

## Time Complexity Analysis
- **O(n * 2^n)** where n is the number of elements
- Total subsets: 2^n
- For each subset, we check n bits to determine which elements to include
- Overall: O(n * 2^n)

## Space Complexity Analysis
- **O(n)** for storing the input array
- No additional space proportional to number of subsets (we generate them on-the-fly)
- Overall: O(n)

## Reflection
This problem introduced me to the powerful bitmask technique for subset generation. The insight that each subset can be uniquely represented by a binary number where each bit corresponds to including/excluding an element is elegant. Using bitwise operations like left shift `(1 << i)` and AND `(mask & bit)` makes this very efficient. This technique is fundamental in competitive programming for problems involving combinations, subsets, and state representation. It's much cleaner than recursive backtracking for generating all subsets.


![alt text](image-7.png)