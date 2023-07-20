#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings and new line
 * @separator: separates strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	char *str;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (a = 0; a < n; a++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
		{
			if (a == n - 1)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
	}
	printf("\n");
	va_end(args);
}
