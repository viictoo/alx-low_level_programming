#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

int main(void)
{
    char fib1[MAX_DIGITS] = "1";
    char fib2[MAX_DIGITS] = "2";
    char next[MAX_DIGITS];
    int i;

    printf("%s, %s, ", fib1, fib2);

    for (i = 3; i <= 98; i++)
    {
        memset(next, 0, MAX_DIGITS);

        int carry = 0;
        int j;

        for (j = 0; j < strlen(fib2); j++)
        {
            int digit1 = fib1[strlen(fib1) - j - 1] - '0';
            int digit2 = fib2[strlen(fib2) - j - 1] - '0';

            int sum = digit1 + digit2 + carry;

            next[MAX_DIGITS - j - 1] = (sum % 10) + '0';

            carry = sum / 10;
        }

        for (j = strlen(fib2); j < strlen(fib1); j++)
        {
            int digit = fib1[strlen(fib1) - j - 1] - '0';

            int sum = digit + carry;

            next[MAX_DIGITS - j - 1] = (sum % 10) + '0';

            carry = sum / 10;
        }

        if (carry > 0)
        {
            next[MAX_DIGITS - j - 1] = carry + '0';
        }

        printf("%s", next);

        if (i < 98)
        {
            printf(", ");
        }

        strcpy(fib1, fib2);
        strcpy(fib2, next);
    }

    printf("\n");

    return 0;
}
