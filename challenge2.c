#include <stdio.h>

int main()
{
    // Declaring variables for inputs and outputs
    float distance;
    float mileage;
    float fuelPrice;
    float fuelRequired;
    float totalCost;

    // Input Values
    printf("Enter distance in kilometers: ");
    scanf("%f", &distance);

    printf("Enter mileage in km/litre: ");
    scanf("%f", &mileage);

    printf("Enter fuel price per litre: ");
    scanf("%f", &fuelPrice);

    // Calculations
    fuelRequired = distance / mileage;
    totalCost = fuelRequired * fuelPrice;

    // Displaying the output
    printf("\n Trip Details \n");
    printf("Fuel Needed: %.2f litres\n", fuelRequired);
    printf("Total Cost: Rs.%.2f\n", totalCost);

    return 0;
}