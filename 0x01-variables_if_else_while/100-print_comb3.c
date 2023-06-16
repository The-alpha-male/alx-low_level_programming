#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return:0 (success)
*/
int main(void)
{
	int digit_1, digit_2;

	for (digit_1 = '0'; digit_1 < '9'; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 <= '9'; digit_2++)
		{
			if (digit_2 != digit_1)
			{
				putchar(digit_1);
				putchar(digit_2);
				if (digit_1 == '0' && digit_2 == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
