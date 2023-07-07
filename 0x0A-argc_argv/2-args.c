#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments a program gets
 * @argc: arguments
 * @argv: array
 * Return: returns 0 on succesful execution
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
