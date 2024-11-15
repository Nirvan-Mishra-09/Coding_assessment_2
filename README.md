# Bubble Sort and Median Calculator

A C program that implements bubble sort algorithm to sort an array of integers and calculate the median value.

## Features

- Bubble sort implementation for array sorting
- Median calculation for both even and odd-sized arrays
- Interactive command-line interface
- Dynamic array size input

## Algorithm Overview

### Bubble Sort
The program uses bubble sort algorithm with the following characteristics:
- Time Complexity: O(n²)
- Space Complexity: O(1)
- In-place sorting algorithm

### Median Calculation
- For odd-sized arrays: middle element after sorting
- For even-sized arrays: average of two middle elements after sorting

## Functions

1. `bsort(int* arr, int n)`
   - Parameters:
     - `arr`: Input array to be sorted
     - `n`: Size of the array
   - Returns: Pointer to the sorted array

2. `sortAndFindMedian(int* arr, int n)`
   - Parameters:
     - `arr`: Input array
     - `n`: Size of the array
   - Functionality:
     - Sorts the array
     - Prints sorted array
     - Calculates and prints median

## Usage

1. Compile the program:
   ```bash
   gcc bsort.c -o bsort
   ```

2. Run the executable:
   ```bash
   ./bsort
   ```


Test case 1: 

![image](https://github.com/user-attachments/assets/01f04f86-c186-435f-9fee-23bd52187d59)

Test case 2:

![image](https://github.com/user-attachments/assets/66e966bf-e0d5-4bf6-bc5e-12548be885a0)

Test Case 3:

![image](https://github.com/user-attachments/assets/c6b55550-471f-415a-a60c-02304d8c0ae6)
