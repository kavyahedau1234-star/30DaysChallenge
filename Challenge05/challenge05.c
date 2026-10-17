#include <stdio.h>
#include <math.h>

int main()
{
    int operations = 0;

    while (operations != 4)
    {
        printf("Enter the equation you want to perform:\n");
        printf(" Enter 1 for Linear Equation\n");
        printf(" Enter 2 forvFactorial\n");
        printf(" Enter 3 for Quadratic Equation\n");
        printf("Enter 4 tovExit\n");
        printf("Enter operations: ");
        scanf("%d", &operations);

        if (operations == 1)
        {
            float a, b;
            printf("Enter value of a: ");
            scanf("%f", &a);
            printf("Enter value of b: ");
            scanf("%f", &b);

            if (a != 0)
            {
                printf("x = %.2f\n", -b / a);
            }
            else if (b == 0)
            {
                printf("Infinite solutions\n");
            }
            else
            {
                printf("No solution\n");
            }
        }

        else if (operations == 2)
        {
            int n;
            int factorial = 1;

            printf("Enter a number n from 0 to 12: ");
            scanf("%d", &n);

            if (n < 0 || n > 12)
            {
                printf("Invalid: Please enter a number between 0 and 12\n");
            }
            else
            {
                int i = 1;
                while (i <= n)
                {
                    factorial = factorial * i;
                    i++;
                }
                printf("Factorial = %d\n", factorial);
            }
        }

        else if (operations == 3)
        {
            float a, b, c, D, root1, root2;

            printf("Enter a: ");
            scanf("%f", &a);

            if (a == 0)
            {
                printf("Not a quadratic equation!\n");
            }
            else
            {
                printf("Enter b: ");
                scanf("%f", &b);
                printf("Enter c: ");
                scanf("%f", &c);

                D = (b * b) - (4 * a * c);

                if (D > 0)
                {
                    printf("Roots are real and different\n");
                    printf("Root 1=%.2f\n",
                           (-b + sqrt(D)) / (2 * a));
                    printf("Root 2 = %.2f\n",
                           (-b - sqrt(D)) / (2 * a));
                }
                else if (D == 0)
                {
                    root1 = -b / (2 * a);
                    root2 = root1;

                    printf("Roots are real and equal\n");
                    printf("Root 1 = Root 2 = %.2f\n", root1);
                }
                else
                {
                    printf("No real roots in here\n");
                }
            }
        }
        else if (operations == 4)
        {
            printf("Exiting the program\n");
        }
        else
        {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}