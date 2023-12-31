#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - to checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 sucess
 *        1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - to returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len_1, len_2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	len = len_1 + len_2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len_1 + len_2; i++)
		result[i] = 0;
	for (len_1 = len_1 - 1; len_1 >= 0; len_1--)
	{
		digit1 = s1[len_1] - '0';
		carry = 0;
		for (len_2 = _strlen(s2) - 1; len_2 >= 0; len_2--)
		{
			digit2 = s2[len_2] - '0';
			carry += result[len_1 + len_2 + 1] + (digit1 * digit2);
			result[len_1 + len_2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len_1 + len_2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
