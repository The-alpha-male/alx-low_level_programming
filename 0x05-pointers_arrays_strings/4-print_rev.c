#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
