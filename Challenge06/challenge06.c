#include <stdio.h>

int main()
{
    int N;
    int a[12];

    printf("Enter number of readings N between 5 and 12: ");
    scanf("%d", &N);
    while (N < 5 || N > 12)
    {
        printf("Invalid N! Soo enter a value between 5 and 12: ");
        scanf("%d", &N);
    }

    printf("Enter %d readings from 0 to 1000 :\n", N);
    for (int i = 0; i < N; i++)
    {
        printf("Reading %d: ", i + 1);
        scanf("%d", &a[i]);
        while (a[i] < 0 || a[i] > 1000)
        {
            printf("Invalid input! Enter value between 0 and 1000: ");
            scanf("%d", &a[i]);
        }
    }

    printf("\n Task 1 is Original Readings \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int sum = 0;
    int min = a[0];
    int max = a[0];

    for (int i = 0; i < N; i++)
    {
        sum += a[i];
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    float average = (float)sum / N;

    printf("\n Task 2 is  Statistics \n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    int second_max = -1;
    for (int i = 0; i < N; i++)
    {
        if (a[i] < max && a[i] > second_max)
        {
            second_max = a[i];
        }
    }

    printf("\n  Task 3 is Second Largest Different Value \n");
    if (second_max != -1)
    {
        printf("Second largest different value: %d\n", second_max);
    }
    else
    {
        printf("No second largest different value exists.\n");
    }

    int peak_count = 0;
    for (int i = 1; i < N - 1; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            peak_count++;
        }
    }

    printf("\n Task 4 is Local Peaks \n");
    printf("Number of local peaks: %d\n", peak_count);

    int max_run = 1;
    int current_run = 1;

    for (int i = 0; i < N - 1; i++)
    {
        if (a[i + 1] > a[i])
        {
            current_run++;
            if (current_run > max_run)
            {
                max_run = current_run;
            }
        }
        else
        {
            current_run = 1;
        }
    }

    printf("\n Task 5 is Longest Increasing Run \n");
    printf("Longest strictly increasing run length: %d\n", max_run);

    int K;
    printf("\n  Task 6 is Array Rotation \n");
    printf("Enter shift amount K (positive for right, negative for left): ");
    scanf("%d", &K);

    int shift = K % N;
    if (shift < 0)
    {
        shift = shift + N;
    }

    for (int s = 0; s < shift; s++)
    {
        int temp = a[N - 1];
        for (int i = N - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }

    printf("Rotated Array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int R;
    printf("\n Task 7 is Divisibility Check \n");
    printf("Enter last two digits of your registration number (R): ");
    scanf("%d", &R);

    if (R < 0)
        R = -R;
    int D = (R % 9) + 1;
    int div_count = 0;

    for (int i = 0; i < N; i++)
    {
        if (a[i] % D == 0)
        {
            div_count++;
        }
    }

    printf("Calculated Divisor = (R %% 9) + 1: %d\n", D);
    printf("Count of values divisible by %d: %d\n", D, div_count);

    return 0;
}