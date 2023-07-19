#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: function pointer
 * Return: nothing
 */


void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
