#include <stdio.h>

int main()
{
    int ticket[15];
    int n, i, j, id;
    int count;
    int missing = 0, duplicate = 0;
    int missingCount = 0, duplicateCount = 0;
    int invalid = 0;
    int outOfOrder = 0;
    int R, target;
    int targetCount = 0;

    printf("Enter the number of tickets from 5 to 15:");
    scanf("%d", &n);

    while (n < 5 || n > 15)
    {
        printf("Invalid N, please enter again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter ticket id at position %d: ", i + 1);
        scanf("%d", &ticket[i]);

        while (ticket[i] < 1 || ticket[i] > n)
        {
            printf("Invalid ID, please enter again: ");
            scanf("%d", &ticket[i]);
        }
    }

    printf("\nOriginal sequence: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", ticket[i]);
    }

    printf("\n");

    for (id = 1; id <= n; id++)
    {
        count = 0;

        for (i = 0; i < n; i++)
        {
            if (ticket[i] == id)
            {
                count++;
            }
        }

        if (count == 0)
        {
            missing = id;
            missingCount++;
        }
        else if (count == 2)
        {
            duplicate = id;
            duplicateCount++;
        }
        else if (count != 1)
        {
            invalid = 1;
        }
    }

    if (invalid == 1 || missingCount != 1 ||
        duplicateCount != 1)
    {
        printf("Invalid!\n");
    }
    else
    {
        printf("Duplicate ticket ID: %d\n", duplicate);
        printf("Missing ticket ID: %d\n", missing);

        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (ticket[i] > ticket[j])
                {
                    outOfOrder++;
                }
            }
        }

        printf("Out-of-order pairs: %d\n", outOfOrder);

        printf("Enter last two digits of registration number: ");
        scanf("%d", &R);

        while (R < 0 || R > 99)
        {
            printf("Invalid value, please enter again: ");
            scanf("%d", &R);
        }

        target = (R % n) + 1;

        printf("Target ticket ID: %d\n", target);
        printf(" positions of target ID:%d\n", target);

        for (i = 0; i < n; i++)
        {
            if (ticket[i] == target)
            {
                printf("%d ", i + 1);
                targetCount++;
            }
        }

        printf("\nOccurrence count: %d\n", targetCount);
    }

    return 0;
}