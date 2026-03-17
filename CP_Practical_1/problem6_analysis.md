# Problem 6 - K Largest Elements

## Problem Summary
Given N numbers, find and print the K largest elements in descending order.

## Algorithm Explanation
1. Read N numbers into a vector
2. Create a max heap (priority_queue in C++ is max heap by default)
3. Insert all N elements into the max heap
4. Extract the top element K times:
   - The top of max heap contains the largest element
   - Remove it and add to result
   - The next largest automatically bubbles up
5. Print the K largest elements (they will be in descending order)

## Time Complexity Analysis
- **O(n log n + k log n)** where n is total elements and k is number of largest elements needed
- Building the heap: O(n log n) - inserting n elements, each taking O(log n)
- Extracting k elements: O(k log n) - each extraction takes O(log n)
- Overall: O(n log n) since typically k ≤ n

Note: Can be optimized to O(n log k) by maintaining a min heap of size k, but max heap approach is simpler.

## Space Complexity Analysis
- **O(n)** for storing elements in the heap
- **O(k)** for storing the result
- Overall: O(n)

## Reflection
This problem introduced me to priority queues (heaps), which automatically maintain elements in sorted order. The max heap ensures that the largest element is always at the top, making it trivial to find the k largest elements. I learned that C++ `priority_queue` is a max heap by default, but can be converted to min heap using custom comparator. This data structure is essential for problems involving "top K" elements, scheduling, and finding extremes efficiently without fully sorting the array.


![alt text](image-5.png)