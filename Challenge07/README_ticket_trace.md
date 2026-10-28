# TICKET TRACE

**30-Day C Programming Challenge | Challenge 07/30**

*Scan. Detect. Verify.*

A C program that audits the scan log of a campus event. It finds the missing and duplicate ticket IDs, measures how far the scan sequence is out of order, and checks a personalised audit ticket.

This challenge is part of **CSE 101 – Fundamentals of Computing and C Programming** (CODE2THINK: Think First. Code Better.).

## Problem Statement

A campus event uses ticket IDs from `1` to `N`. The scanner records `N` entries, but one ticket ID is missing and another ticket ID has been scanned twice. The job is to audit the scan log, identify the missing and duplicate IDs, and measure how far the scan sequence is out of order. The logic should be planned before writing code.

## Input Rules

- Enter N, where 5 ≤ N ≤ 15, followed by N ticket IDs
- Every ticket ID must be between 1 and N
- A valid scan log has exactly **one missing ID** and exactly **one different ID appearing twice**; all other IDs appear once
- If the input violates this pattern, report that the scan log is **invalid**
- If N or any ticket ID is outside its allowed range, ask for that value again


## Built With

- **C Language**
- printf() and scanf() for input and output
- One-dimensional array
- Nested loops for frequency counting and pair comparison
- if-else conditional statements
- Arithmetic and modulus operators

## Output Format


Original scan sequence = ...
Duplicated ticket ID   = ...
Missing ticket ID      = ...
Out-of-order pairs     = ...
Target ticket ID       = ...
Target positions       = ...
Target occurrence count = ...

If the log is not valid, the program displays an invalid scan log message instead.


## What I Practiced

- Using a one-dimensional array without sorting or a second array
- Finding each ID's frequency using nested loops
- Detecting the missing and duplicate IDs
- Counting out-of-order pairs (inversions) by comparing each entry with those to its right
- Converting zero-based indices to one-based positions
- Validating input and handling invalid logs
- Testing edge cases



## About This Project

Each challenge is helping me strengthen my C programming fundamentals and improve my problem-solving skills, one challenge at a time. 💻
