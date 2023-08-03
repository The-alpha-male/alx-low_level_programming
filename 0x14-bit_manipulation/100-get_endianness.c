#include "main.h"

/**
 * get_endianness - function that checks for endianess
 *
 * Return: 0 if big endian or 1 for little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *)&i;

	if (*j)
		return (1);
	else
		return (0);
}
