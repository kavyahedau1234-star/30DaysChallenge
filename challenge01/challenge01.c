#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float total, average, percentage;

    // Reading marks for five subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks for subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks for subject 5: ");
    scanf("%f", &sub5);

    // Calculations
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;
    percentage = (total / 500) * 100; // Assuming each subject is out of 100

    // Displaying the results clearly
    printf("\n RESULTS \n");
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}