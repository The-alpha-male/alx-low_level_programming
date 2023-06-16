#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits,
 *              separated by ", ", in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_1, digit_2;

	for (digit_1 = 0; digit_1 <= 8; digit_1++)
	{
		for (digit_2 = digit+1 + 1; digit_2 <= 9; digit_2++)
		{
			putchar(digit_1 + '0');

			putchar(digit_2 + '0');

			if (digit_1 != 8 || digit_2 != 9)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}
