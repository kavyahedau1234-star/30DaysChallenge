# TripCalc: Road Trip Fuel Calculator

A simple C program that helps a student plan a road trip. Enter the distance, your vehicle's mileage and the current fuel price, and TripCalc tells you how much fuel you need and what it will cost.

## Problem Statement

A student is planning a road trip. Write a C program to read:

- the total distance to be travelled (in kilometres),
- the vehicle's mileage (kilometres per litre), and
- the current fuel price per litre.

Calculate and display the **amount of fuel required** for the trip and the **total fuel cost**.

## Concepts Practised

- Variables and the float data type
- Input with `scanf()` and output with printf()
- Arithmetic operators (`/` and `*`)
- Formatted output (`%.2f`)
- Basic input validation with "if"

## Formulas

Fuel Required (litres) = Total Distance (km) / Mileage (km/l)
Total Fuel Cost        = Fuel Required (litres) x Price per Litre


## Example

Road Trip Fuel Calculator 

Enter total distance to travel (km): 450
Enter vehicle mileage (km/l): 18
Enter current fuel price per litre: 105.50

 Trip Summary 
Fuel required : 25.00 litres
Total fuel cost: 2637.50

## How It Works

1. The program asks for the distance, mileage and fuel price.
2. It checks that the values make sense (mileage must be greater than zero, so we never divide by zero).
3. It divides distance by mileage to get the litres needed.
4. It multiplies the litres by the price per litre to get the total cost.
5. It prints both results to two decimal places.



## Author

Part of my **C Programming Challenges** series, a 30-day challenge to learn programming fundamentals through small projects.
