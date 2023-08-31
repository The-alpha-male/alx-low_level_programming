#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: unsigned int with decimal value of binary no.
 *        or 0 (FAIL)
 */

unsigned int binary_to_uint(const char *b)
{
	int dig = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dig = dig * 2 + (b[i] - '0');
		i++;
	}
	return (dig);
}
