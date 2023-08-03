#include "main.h"

/**
 * flip_bits - returns no. of bits to be flipped
 * from one number to another
 *
 * @n: the first bit word
 * @m: the second bit word
 *
 * Return: the hamming distance
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, p = n | m;
	unsigned long int check = 1, no = 0;

	while (p)
	{
		if (diff & check)
			no++;

		check = check << 1;
		p = p >> 1;
	}

	return (no);
}
