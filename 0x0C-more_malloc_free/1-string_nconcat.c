#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: String1
 * @s2: String2
 * @n: unsigned int
 *
 * Return: Pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len_1, len_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_1 = 0;
	while (s1[len_1])
		len_1++;

	len_2 = 0;
	while (s2[len_2])
		len_2++;

	if (n >= len_2)
		n = len_2;

	str = malloc(sizeof(char) * (len_1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}
