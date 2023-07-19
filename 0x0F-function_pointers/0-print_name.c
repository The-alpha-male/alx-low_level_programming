#include <stddef.h>
#include <stdlib.h>
#inclulde "function_pointers.h"

/**
 * print_name - prints a name
 * @name: char pointer
 * @f: function pointer
 * Return: NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
