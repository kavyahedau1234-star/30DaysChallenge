# Menu-Driven Math Calculator

A basic C program where you select any math function from a menu. Once the function is performed, the menu will appear again. The program will stop only after choosing Exit

This is part of my **30-Day C Programming Challenge**.

## Challenge Objective
Create a menu-driven C program where you select any math function. Once the function is performed, the menu will appear again. The program will stop only after choosing Exit.

## Menu Options

Option 1: Solve Linear Equation (ax + b = 0)
- Find x or indicate no solution / infinitely many solutions

Option 2: Calculate factorial (n!)
- Use loop to calculate factorial. Only accept integers between 0 to 12

Option 3: Solve Quadratic Equation (ax² + bx + c = 0)
- Use discriminant to identify roots and find real roots

Option 4: Exit
- Print message and terminate the program

## Detailed Requirements

- Use loop to repeat menu until Exit is selected
- Use if else or switch to process the selection
- Linear equation:
  - If a != 0 then x = -b/a
  - If a == 0 && b == 0 then infinitely many solutions
  - If a == 0 && b != 0 then no solution
- Factorial: reject non valid values outside 0-12 range. Remember 0! = 1
- Quadratic equation:
  - a != 0. If a == 0 inform the user that this is not a quadratic equation
- Identify roots as two different real roots, two equal real roots or no real roots
- In case of wrong menu selection print error and show menu again
- 
## Built With

- C Language
- printf() and scanf() for input and output
- Loops for repeating the menu
- if else/switch for menu selection
- Arithmetic
  
## What I Practiced

- Creating a menu-driven C program
- Repetition of menu with the use of loop until the menu gets an option of “exit”
- Use if-else or switch according to the selected menu option
- Use the loop to find factorial
- Discriminant to classify roots of the quadratic equation
- Validation of inputs and handling of invalid inputs.
- 
## About This Project

I am creaating such little projects for improving my basics in C programming.
