#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc -reallocate memory block using malloc & free
 * @ptr: Pointer
 * @old_size: Size in bytes of allocated space for ptr
 * @new_size: New size of new memory block
 *
 * Return: Pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
		*((char *)new_ptr + a) = *((char *)ptr + a);

	free(ptr);
	return (new_ptr);
}
