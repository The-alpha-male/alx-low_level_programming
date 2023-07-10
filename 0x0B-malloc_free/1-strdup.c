#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *          containing a copy of the string given as parameter.
 * @str: string to be copied
 *
 * Return: NULL if str = NULL
 *         SUCCESS _strdup function returns a pointer to
 *         the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int j;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
		dup[j] = str[j];

	dup[j] = '\0';
	return (dup);
}

