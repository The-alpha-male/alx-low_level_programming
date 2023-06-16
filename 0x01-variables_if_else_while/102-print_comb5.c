#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Description:
 *   This program generates and prints all possible combinations of two
 *   until "98 99".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, j;

	for (x = 0; x < 100; x++)
	{
		for (j = 0; j < 100; j++)
		{
			if (x < j)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

				if (x != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
