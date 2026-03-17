# CP Practicals 1 - Data Structures & Algorithms

This folder contains solutions to 10 competitive programming problems covering:
- Vectors / Dynamic Arrays
- Deque (Double-ended Queue)
- Priority Queue (Heaps)
- Bitmask Techniques

## Problems Overview

### Vector Problems
1. **problem1_dynamic_array.cpp** - Find max, min, and sum of array elements
2. **problem2_reverse_array.cpp** - Print array in reverse order
3. **problem3_remove_duplicates.cpp** - Remove duplicate elements from array

### Deque Problems
4. **problem4_sliding_window_max.cpp** - Find maximum in sliding windows
5. **problem5_balanced_line.cpp** - Simulate line with front/back operations

### Priority Queue Problems
6. **problem6_k_largest.cpp** - Find K largest elements using max heap
7. **problem7_running_median.cpp** - Compute median in a stream using two heaps

### Bitmask Problems
8. **problem8_subset_generation.cpp** - Generate all subsets
9. **problem9_even_sum_subsets.cpp** - Count subsets with even sum
10. **problem10_subset_sum_count.cpp** - Count subsets with target sum

## File Structure

For each problem:
- `problemX_name.cpp` - C++ solution
- `problemX_analysis.md` - Detailed analysis including:
  - Problem summary
  - Algorithm explanation
  - Time complexity analysis
  - Space complexity analysis
  - Personal reflection

## Compilation and Running

To compile any solution:
```bash
g++ -std=c++17 problemX_name.cpp -o problemX_name
```

To run:
```bash
./problemX_name
```

## Note on Screenshots

Screenshots showing successful execution should be added for each problem as `problemX_screenshot.png`.

## Key Learnings

- **Vectors**: Dynamic arrays with automatic memory management
- **Deque**: Efficient O(1) operations at both ends
- **Priority Queue**: Automatic sorting for finding extremes
- **Bitmask**: Elegant technique for subset enumeration
- **Two Heaps**: Advanced technique for maintaining running statistics

---
**Author**: Solutions for CP_Practicals_SS26
**Date**: March 2026
