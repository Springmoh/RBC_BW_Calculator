#include "stdio.h"

enum
{
    ADD = 1,
    SUBTRACT,
    DIVIDE,
    TIMES,
};

char input[10];
int mode;
float x, y, ans;

int main()
{
    while (1)
    {
        puts("\n\nPlease select an operation");
        printf("1. ADD\n2. SUBTRACT\n3. DIVIDE\n4. TIMES\n");

        if (scanf("%d", &mode) != 1 || mode < 1 || mode > 4)
        {
            printf("Invalid selection. Please try again.\n");
            while (getchar() != '\n');
            mode = 0;
            continue;
        }
        else
        {
            printf("Enter Mode %d\n", mode);
        }

        printf("Enter two numbers: ");

        if (scanf("%f %f", &x, &y) != 2)
        {
            printf("Error: Invalid input. Please enter numeric values.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (mode)
        {
        case ADD:
            ans = x + y;
            printf("Result: %.2f\n", ans);
            break;

        case SUBTRACT:
            ans = x - y;
            printf("Result: %.2f\n", ans);
            break;

        case DIVIDE:
            if (y == 0)
            {
                printf("Error: Division by zero.\n");
            }
            else
            {
                ans = x / y;
                printf("Result: %.2f\n", ans);
            }
            break;

        case TIMES:
            ans = x * y;
            printf("Result: %.2f\n", ans);
            break;

        default:
            mode = 0;
            break;
        }

        mode = 0;
    }

    return 0;
}
