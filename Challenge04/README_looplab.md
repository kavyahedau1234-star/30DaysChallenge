# LOOPLAB - Daily Expense Analyser

A simple C program that analyses daily expenses. It keeps reading expense amounts from the user until `0` is entered, classifies each positive amount using conditional statements, updates the counts and totals, and finally displays a summary.

This is part of my **30-Day C Programming Challenge**.

## Problem Statement

Create a C program called **LOOPLAB** to analyse daily expenses. The program should:

- Repeatedly read expense amounts until the user enters `0`
- For each positive amount, classify it using the given rules
- Update the counts and totals for each category
- Display a summary at the end

**Constraints:** no arrays, no functions, and no strings.

## What Does This Program Do?

The program:

- Reads expense amounts in a loop
- Stops when the user enters `0`
- Classifies every positive amount into a category
- Keeps track of the count and total for each category
- Displays a final summary of all expenses

## Built With

- **C Language**
- `printf()` and `scanf()` for input and output
- Loops (`while` / `do-while`) for repeated input
- `if`, `else if`, `else` conditional statements
- Basic arithmetic operations

## Input

| Input | Description |
|-------|-------------|
| Expense amount | Amount spent, entered repeatedly |
| `0` | Ends the input and shows the summary |

## Output Format

```
Number of expenses in each category = ...
Total amount in each category       = ...
Overall total expense               = ...
```

## What I Practiced

- Using loops to take repeated input
- Stopping a loop with a sentinel value (`0`)
- Classifying values with `if-else` conditions
- Keeping running counts and totals with variables
- Solving the problem without arrays, functions, or strings

## About This Project

I'm building small projects like this to improve my C programming fundamentals, one challenge at a time.
