#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by ", ", in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mNumber;
	/*looping to print the posible comination of numbers*/
	for (Number = 0; Number <= 9; Number++)
	{
		putchar(Number + '0');

		if (Number != 9)
		{
			putchar(',');

			putchar(' ');

		}

	}

	putchar('\n');
	return (0);

}
