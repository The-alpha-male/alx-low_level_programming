#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory by malloc
 * @b - size of memory allocated
 *
 * return - ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return(ptr);
}
