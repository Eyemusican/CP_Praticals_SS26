# Problem 5 - Balanced Line Problem

## Problem Summary
Simulate a line of people where operations can add or remove people from both the front and back of the line. After each operation, display the current state of the line.

## Algorithm Explanation
1. Create a deque to represent the line of people
2. Read the number of operations to perform
3. For each operation:
   - **push_front x**: Add person x to the front of the line using `push_front()`
   - **push_back x**: Add person x to the back of the line using `push_back()`
   - **pop_front**: Remove person from the front using `pop_front()` (if not empty)
   - **pop_back**: Remove person from the back using `pop_back()` (if not empty)
4. After each operation, print the current contents of the line
5. Handle edge cases where pop operations are called on empty deque

## Time Complexity Analysis
- **O(n * m)** where n is the number of operations and m is the average size of deque
- Each push/pop operation: O(1)
- Printing the deque after each operation: O(m) where m is current size
- Overall: O(n * m) for n operations

## Space Complexity Analysis
- **O(k)** where k is the maximum size of the deque at any point
- Space grows and shrinks with operations

## Reflection
This problem demonstrated the power of deque (double-ended queue) for problems requiring efficient insertion and deletion at both ends. Unlike vectors which only provide efficient operations at the back, or queues which only allow front removal, deques support O(1) operations at both ends. This makes them ideal for problems like this where the line can be modified from either direction. I learned that deques are implemented as dynamic arrays with blocks, allowing efficient operations at both ends.


![alt text](image-4.png)