# Problem 7 - Running Median

## Problem Summary
For a stream of integers, compute and print the median after each new element is added. The median is the middle element in a sorted list, or the average of two middle elements if the list has even length.

## Algorithm Explanation
The solution uses two heaps to efficiently maintain the median:
1. **Max Heap (maxHeap)**: Stores the smaller half of numbers
2. **Min Heap (minHeap)**: Stores the larger half of numbers

For each new number:
1. Add it to max heap if it's ≤ max heap's top, otherwise add to min heap
2. Balance heaps to ensure maxHeap.size() is either equal to or exactly 1 more than minHeap.size()
   - If maxHeap has 2+ more elements, move its top to minHeap
   - If minHeap has more elements, move its top to maxHeap
3. Calculate median:
   - If both heaps have equal size: median = (maxHeap.top() + minHeap.top()) / 2
   - Otherwise: median = maxHeap.top()

This maintains the invariant that median is always accessible in O(1) time.

## Time Complexity Analysis
- **O(n log n)** where n is the number of elements
- For each element:
  - Adding to heap: O(log n)
  - Balancing (at most 2 operations): O(log n)
  - Finding median: O(1)
- Overall: O(n log n) for n elements

## Space Complexity Analysis
- **O(n)** for storing all elements across both heaps
- Max heap stores ~n/2 elements
- Min heap stores ~n/2 elements

## Reflection
This was the most challenging problem so far. I learned how two heaps can work together to maintain a dynamic median efficiently. The key insight is partitioning the data such that max heap contains smaller half and min heap contains larger half, with at most 1 element difference. This way, the median is always at the top of one or both heaps. Without this approach, we'd need to sort after each insertion (O(n² log n)) or use a sorted structure with O(n) median finding. The two-heap approach elegantly solves this in O(log n) per insertion.


![alt text](image-6.png)