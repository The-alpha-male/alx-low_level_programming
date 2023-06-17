#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - a program that prints whether number is positive ,negative or
 *  Return:0 (Success)
 */

int main(void)
{
	int i;
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	/* det sgn of number*/
	if (i > 0)
	{
		printf("%d is positive\i", i );
	}
	else if (i < 0)
	{
		printf("%d is negative\i", i );
	}
	else
	{
		printf("%d is zero\i", i );
	}
	return (0);
}
