# Problem 1 — Dynamic Array Basics

## Problem Summary
Read N integers, store them in a dynamic container, and print the maximum, minimum, and sum of all elements.

## Algorithm Explanation
- Use a vector to store N integers
- Traverse the vector to find max, min, and sum using a single loop

## Time Complexity
O(n) — single pass through the array

## Space Complexity
O(n) — vector stores n elements

## Reflection
This problem helped me get comfortable with vectors as a dynamic container. I learnt how to traverse and compute basic statistics in a single loop without needing extra data structures.

## Screenshot
![screenshot](problem1_screenshot.png)



# Problem 2 — Reverse the Array

## Problem Summary
Given N integers, print them in reverse order without using any built-in reverse function.

## Algorithm Explanation
- Store integers in a vector
- Traverse from index N-1 down to 0 and print each element

## Time Complexity
O(n) — single reverse traversal

## Space Complexity
O(n) — vector stores n elements

## Reflection
A simple but foundational problem. I reinforced my understanding of index-based traversal with vectors. Reverse traversal using a loop is more transparent than using std::reverse.

## Screenshot
![screenshot](problem2_screenshot.png)


# Problem 3 — Remove Duplicates

## Problem Summary
Given N integers that may contain duplicates, print only the unique values in sorted order.

## Algorithm Explanation
- Store elements in a vector
- Sort the vector
- Iterate and skip elements that are equal to the previous one

## Time Complexity
O(n log n) — due to sorting

## Space Complexity
O(n) — vector stores n elements

## Reflection
This problem taught me how sorting simplifies duplicate removal. After sorting, duplicates are adjacent, making it easy to skip them with a simple comparison.

## Screenshot
![screenshot](problem3_screenshot.png)


# Problem 4 — Sliding Window Maximum

## Problem Summary
Given an array of size N and a window of size K, print the maximum element in each sliding window position.

## Algorithm Explanation
- Use a deque to store indices of useful elements
- For each new element, remove indices outside the window from the front
- Remove smaller elements from the back (they can never be the max)
- Front of deque always holds the index of the current window maximum

## Time Complexity
O(n) — each element is added and removed from the deque at most once

## Space Complexity
O(k) — deque holds at most k indices at a time

## Reflection
This problem helped me understand how a deque can maintain a sliding window maximum efficiently. Initially I considered a brute force O(nk) approach, but using a deque reduced it to O(n). The key insight is keeping the deque monotonically decreasing.

## Screenshot
![screenshot](problem4_screenshot.png)


# Problem 5 — Balanced Line Problem

## Problem Summary
Simulate a queue with push/pop operations at both ends and print the contents after each operation.

## Algorithm Explanation
- Use a deque to support push_front, push_back, pop_front, and pop_back
- After each operation, print all current elements in the deque

## Time Complexity
O(1) per operation, O(n) to print after each step

## Space Complexity
O(n) — deque holds all current elements

## Reflection
This problem demonstrated the versatility of a deque over a regular queue or stack. Being able to insert and remove from both ends makes it perfect for simulating a line with flexible entry and exit.

## Screenshot
![screenshot](problem5_screenshot.png)


# Problem 6 — K Largest Elements

## Problem Summary
Given N numbers, find and print the K largest elements in descending order.

## Algorithm Explanation
- Push all elements into a max heap (priority_queue)
- Pop K times — each pop gives the next largest element

## Time Complexity
O(n log n) — building heap is O(n log n), K pops are O(k log n)

## Space Complexity
O(n) — priority queue stores all n elements

## Reflection
This problem introduced me to priority queues as an efficient way to find top-K elements. The max heap property ensures the largest element is always at the top, making extraction straightforward.

## Screenshot
![screenshot](problem6_screenshot.png)


# Problem 7 — Running Median

## Problem Summary
Given a stream of integers, print the median after each new element is added.

## Algorithm Explanation
- Use two heaps: a max heap for the lower half and a min heap for the upper half
- Balance the heaps so their sizes differ by at most 1
- Median is the top of the larger heap, or average of both tops if equal size

## Time Complexity
O(n log n) — each insertion involves heap push/pop operations

## Space Complexity
O(n) — both heaps together store all n elements

## Reflection
This was the most challenging problem in the set. Using two heaps to maintain a dynamic median was a clever insight. I learnt that keeping the heaps balanced is the key — the median is always accessible in O(1) after each balanced insertion.

## Screenshot
![screenshot](problem7_screenshot.png)


# Problem 8 — Subset Generation

## Problem Summary
Given N numbers, generate and print all possible subsets including the empty set.

## Algorithm Explanation
- Use bitmask from 0 to 2^N - 1
- For each mask, check which bits are set
- Include the corresponding element if the bit is 1

## Time Complexity
O(2^n * n) — 2^n subsets, each taking O(n) to generate

## Space Complexity
O(n) — only current subset is stored at a time

## Reflection
Bitmask enumeration was a new and elegant approach for me. Representing each subset as a binary number made the logic very clean. I now understand why bitmasks are a go-to technique for subset problems when N is small.

## Screenshot
![screenshot](problem8_screenshot.png)



# Problem 9 — Count Subsets with Even Sum

## Problem Summary
Given N numbers, count how many subsets (including empty set) have an even sum.

## Algorithm Explanation
- Generate all 2^N subsets using bitmask
- For each subset, compute the sum of included elements
- Count subsets where sum % 2 == 0

## Time Complexity
O(2^n * n) — iterate over all subsets and sum elements

## Space Complexity
O(1) — no extra storage beyond loop variables

## Reflection
Building on Problem 8, this problem added a filtering condition. I learnt that the empty set counts as an even sum (sum = 0). The bitmask approach made it easy to enumerate and check all subsets systematically.

## Screenshot
![screenshot](problem9_screenshot.png)


# Problem 10 — Count Subsets with Sum Equal to Target

## Problem Summary
Given N numbers and a target sum, count how many subsets have a sum exactly equal to the target.

## Algorithm Explanation
- Use bitmask to iterate over all 2^N subsets
- For each subset, compute the sum of selected elements
- Increment count if sum equals the target

## Time Complexity
O(2^n * n) — all subsets enumerated, each summed in O(n)

## Space Complexity
O(1) — no extra data structures needed

## Reflection
This problem combined bitmask subset generation with a target condition. I found it satisfying that the same bitmask template from Problems 8 and 9 could be reused with a minor change. It reinforced how powerful and reusable the bitmask pattern is for subset problems.

## Screenshot
![screenshot](problem10_screenshot.png)
