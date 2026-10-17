# Menu-Driven Math Calculator

A menu-driven C program that lets the user choose a mathematical operation. After each operation, the menu is displayed again, and the program stops only when the user selects Exit.

This is part of my **30-Day C Programming Challenge**.

## Challenge Objective

Create a menu-driven C program that lets a user choose a mathematical operation. After each operation, display the menu again. The program must stop only when the user selects Exit.

## Menu Options

| Choice | Operation | What the program must do |
|--------|-----------|--------------------------|
| 1 | Solve a linear equation (`ax + b = 0`) | Calculate `x`, or identify no solution / infinitely many solutions |
| 2 | Calculate factorial (`n!`) | Calculate factorial using a loop. Accept integers from 0 to 12 only |
| 3 | Solve a quadratic equation (`ax² + bx + c = 0`) | Use the discriminant to identify the type of roots and calculate real roots |
| 4 | Exit | Display a closing message and terminate the program |

## Detailed Requirements

- Use a loop to repeat the menu until Exit is selected
- Use `if-else` or `switch` to process the selected operation
- **Linear equation:**
  - If `a ≠ 0`, calculate `x = -b/a`
  - If `a = 0` and `b = 0`, report infinitely many solutions
  - If `a = 0` and `b ≠ 0`, report no solution
- **Factorial:** reject values outside 0–12. Remember that `0! = 1`
- **Quadratic equation:**
  - Require `a ≠ 0`. If `a = 0`, tell the user it is not a quadratic equation
  - Classify the roots as two distinct real roots, two equal real roots, or no real roots
- For an invalid menu choice, show an error and display the menu again

## Built With

- **C Language**
- `printf()` and `scanf()` for input and output
- Loops for repeating the menu
- `if-else` / `switch` for handling choices
- Basic arithmetic operations

## What I Practiced

- Building a menu-driven program
- Repeating a menu with loops until Exit is chosen
- Using `if-else` or `switch` to handle different options
- Using a loop to calculate factorial
- Using the discriminant to classify the roots of a quadratic equation
- Validating inputs and handling invalid choices

## About This Project

I'm building small projects like this to improve my C programming fundamentals, one challenge at a time.
