# Smart Campus Activity Monitor

A C program that studies a sequence of activity readings from a smart-campus monitor, finds meaningful patterns in the data, and then rotates the array for a cyclic report. The important part is planning the logic before coding and handling unusual cases correctly.

This is part of my **30-Day C Programming Challenge**.

## Problem Statement

A smart-campus activity monitor records the number of visits over several time slots. Write a C program that studies the sequence, finds meaningful patterns, and then rotates the data for a cyclic report.

## Your Mission

Read **N** activity readings into a one-dimensional array and complete every task below.

- `N` must be between **5 and 12** (inclusive)
- Each reading must be an integer from **0 to 1000** (inclusive)
- If `N` or a reading is invalid, ask again until valid input is entered

## Pattern Detective Tasks

1. Display the original readings in the order entered
2. Calculate the sum and average, then identify the minimum and maximum readings
3. Find the **second-largest distinct** value. Repeated copies of the maximum do not count. If no second-largest distinct value exists, display a clear message
4. Count the **local peaks**. A local peak is an interior element that is strictly greater than both its immediate neighbours. The first and last elements cannot be peaks
5. Find the length of the **longest strictly increasing contiguous run**. The values must be next to each other in the original array. If no increase occurs, the longest run has length 1
6. Ask for an integer `K` and **rotate the array right by K positions**
   - Positive `K` rotates right, negative `K` rotates left
   - It must work when the magnitude of `K` is greater than `N`
   - Do not use a second array
7. Let `R` be the last two numeric digits of the registration number. Calculate `D = (R % 9) + 1`, then count how many values in the rotated array are exactly divisible by `D`. Display `D` and the count

## Rules to Follow

- Use a one-dimensional array, loops, and conditional statements
- Do not use a second array

## Built With

- **C Language**
- `printf()` and `scanf()` for input and output
- One-dimensional array
- Loops for validation, searching, and rotation
- `if-else` conditional statements
- Basic arithmetic operations (sum, average, modulus)

## Input

| Input | Description |
|-------|-------------|
| `N` | Number of readings (5 to 12) |
| Readings | `N` integers, each from 0 to 1000 |
| `K` | Number of positions to rotate (positive = right, negative = left) |

## Output Format

```
Original readings        = ...
Sum / Average            = ...
Minimum / Maximum        = ...
Second-largest distinct  = ...
Number of local peaks    = ...
Longest increasing run   = ...
Rotated array            = ...
D and divisible count    = ...
```

## What I Practiced

- Using a one-dimensional array with loops
- Validating input until it is correct
- Finding the sum, average, minimum, and maximum
- Handling edge cases like duplicate maximum values and no second-largest value
- Detecting local peaks and the longest increasing run
- Rotating an array in place, without a second array
- Handling large and negative values of `K`

## About This Project

I'm building small projects like this to improve my C programming fundamentals, one challenge at a time.
