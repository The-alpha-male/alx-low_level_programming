#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: no. of elements
 * @size: size of elements
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int prod = nmemb * size, a = 0;
	char *ptr = NULL;

	if (prod == 0)
		return (NULL);

	ptr = malloc(prod);

	if (ptr == NULL)
		return (NULL);

	while (a < prod)
	{
		ptr[a] = 0;
		a++;
	}

	return (ptr);
}
