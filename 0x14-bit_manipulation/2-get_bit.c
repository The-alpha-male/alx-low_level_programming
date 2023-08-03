#include "main.h"

/**
 * get_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 *
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n >>= index;
	return (n & 1);
}
