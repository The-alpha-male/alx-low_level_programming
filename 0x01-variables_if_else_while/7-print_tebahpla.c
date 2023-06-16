#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char reverse_alphabet;

	/* loop over the letter in a reverse manner */
	for (reverse_alphabet = 'z'; reverse_alphabet >= 'a'; reverse_alphabet--)
		putchar(reverse_alphabet);
	putchar('\n');

	return (0);
}
