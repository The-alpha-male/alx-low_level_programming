#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int i, j;
	char rev;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j / 2; i++)
	{
		rev = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = rev;
	}
}

