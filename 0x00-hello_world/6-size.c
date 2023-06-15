#include <stdio.h>

/**
 * main - Entry point
 *print sizes of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print the size of char */
	printf("Size of a char: %lu byte(s)\n", sizeof(char));

	/* Print the size of int */
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	/* Print the size of long int */
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	/* Print the size of long long int */
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	/* Print the size of float */
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}

