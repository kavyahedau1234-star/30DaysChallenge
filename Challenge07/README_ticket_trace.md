# TICKET TRACE

**30-Day C Programming Challenge | Challenge 07/30**

*Scan. Detect. Verify.*

A C program that audits the scan log of a campus event. It finds the missing and duplicate ticket IDs, measures how far the scan sequence is out of order, and checks a personalised audit ticket.

This challenge is part of **CSE 101 – Fundamentals of Computing and C Programming** (CODE2THINK: Think First. Code Better.).

## Problem Statement

A campus event uses ticket IDs from `1` to `N`. The scanner records `N` entries, but one ticket ID is missing and another ticket ID has been scanned twice. The job is to audit the scan log, identify the missing and duplicate IDs, and measure how far the scan sequence is out of order. The logic should be planned before writing code.

## Input Rules

- Enter `N`, where `5 ≤ N ≤ 15`, followed by `N` ticket IDs
- Every ticket ID must be between `1` and `N`
- A valid scan log has exactly **one missing ID** and exactly **one different ID appearing twice**; all other IDs appear once
- If the input violates this pattern, report that the scan log is **invalid**
- If `N` or any ticket ID is outside its allowed range, ask for that value again

## Detailed Requirements

1. Display the original scan sequence
2. Identify the **duplicated** ticket ID and the **missing** ticket ID. Do not sort the sequence and do not use a second array
3. Count the **out-of-order pairs**. A pair of positions `(i, j)` is out of order when `i < j` and `ticket[i] > ticket[j]`. Each pair of positions is counted once, and equal values do not count
4. Find the **personalised audit ticket**. Let `R` be the last two numeric digits of the registration number and calculate `Target = (R % N) + 1`. Display the target ID, all its one-based positions in the original sequence, and its occurrence count
5. If the completed sequence does not contain exactly one missing ID and one duplicated ID, display an invalid-log message
6. Use only a one-dimensional array, loops (including nested loops), and conditional statements. No second array, no sorting functions, and no hard-coded outputs

## Illustrative Example

```
N = 6
Scan sequence: 1, 3, 2, 3, 5, 6

Duplicated ID       = 3
Missing ID          = 4
Out-of-order pairs  = 1   (3 at position 2, 2 at position 3)
```

If `R = 26`, then `Target = (26 % 6) + 1 = 3`. Its positions are 2 and 4, so its occurrence count is 2.

## Built With

- **C Language**
- `printf()` and `scanf()` for input and output
- One-dimensional array
- Nested loops for frequency counting and pair comparison
- `if-else` conditional statements
- Arithmetic and modulus operators

## Output Format

```
Original scan sequence = ...
Duplicated ticket ID   = ...
Missing ticket ID      = ...
Out-of-order pairs     = ...
Target ticket ID       = ...
Target positions       = ...
Target occurrence count = ...
```

If the log is not valid, the program displays an invalid scan log message instead.

## Test Cases

| # | Test Case | What It Checks |
|---|-----------|----------------|
| 1 | Standard log (`N=6; 1, 3, 2, 3, 5, 6`) | Duplicate 3, missing 4 |
| 2 | Duplicate at the beginning | Duplicate near the start of the log |
| 3 | Duplicate at the end | Repeated ID at the end of the log |
| 4 | Several inversions | Every out-of-order pair is counted once |
| 5 | Personalised target | Target, all its positions, and its count |
| 6 | Invalid scan log | No duplicate/missing pair, or more than one duplicate |
| 7 | Invalid range | `N` outside 5–15 or a ticket ID outside 1–`N` |

## What I Practiced

- Using a one-dimensional array without sorting or a second array
- Finding each ID's frequency using nested loops
- Detecting the missing and duplicate IDs
- Counting out-of-order pairs (inversions) by comparing each entry with those to its right
- Converting zero-based indices to one-based positions
- Validating input and handling invalid logs
- Testing edge cases

## How to Run

```
gcc ticket_trace.c -o ticket_trace
./ticket_trace
```

## About This Project

Each challenge is helping me strengthen my C programming fundamentals and improve my problem-solving skills, one challenge at a time. 💻
