#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits,
 *              separated by ", ", in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit_1, digit_2, digit_3;
/* Loop to print the combinations */
for (digit_1 = 0; digit_1 <= 7; digit_1++)
{
for (digit_2 = digit_1 + 1; digit_2 <= 8; digit_2++)
{
for (digit_3 = digit_2 + 1; digit_3 <= 9; digit_3++)
{
/* Print the current combination */
putchar(digit_1 + '0');
putchar(digit_2 + '0');
putchar(digit_3 + '0');

/* Check != last combination */
if (digit_1 != 7 || digit_2 != 8 || digit_3 != 9)
{
/* ',' and ' ' separator */
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}

