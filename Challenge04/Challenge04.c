#include <stdio.h>

int main()
{
    float expense = 0.0;

    int small_count = 0;
    int medium_count = 0;
    int large_count = 0;
    int total_valid_count = 0;

    float small_total = 0.0;
    float medium_total = 0.0;
    float large_total = 0.0;
    float total_valid_amount = 0.0;
    float average_expense = 0.0;

    printf("LOOPLAB: Daily Expense Analyzer\n");

    while (1)
    {
        printf("Enter expense amount (Enter 0 to stop): ");
        scanf("%f", &expense);
        if (expense == 0)
        {
            break;
        }

        if (expense < 0)
        {
            printf("Error: Invalid input! Negative amounts are not counted.\n");
            continue;
        }

        if (expense < 100)
        {
            small_count++;
            small_total += expense;
        }
        else if (expense < 500)
        {
            medium_count++;
            medium_total += expense;
        }
        else
        {
            large_count++;
            large_total += expense;
        }

        total_valid_count++;
        total_valid_amount += expense;
    }

    printf("\n--- SUMMARY REPORT ---\n");

    if (total_valid_count == 0)
    {
        printf("No valid expenses were entered.\n");
    }
    else
    {
        average_expense = total_valid_amount / total_valid_count;

        printf("Total Valid Expenses Count : %d\n", total_valid_count);
        printf("Total Valid Expenses Amount: Rs. %.2f\n", total_valid_amount);
        printf("Small Expenses (< Rs.100)  : Count = %d, Total = Rs. %.2f\n", small_count, small_total);
        printf("Medium Expenses (Rs.100-499): Count = %d, Total = Rs. %.2f\n", medium_count, medium_total);
        printf("Large Expenses (>= Rs.500) : Count = %d, Total = Rs. %.2f\n", large_count, large_total);
        printf("Average Expense            : Rs. %.2f\n", average_expense);
    }

    return 0;
}