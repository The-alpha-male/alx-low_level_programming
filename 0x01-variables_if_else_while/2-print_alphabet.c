#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* initialize char */
	char alphabets;
	/* for loop for a-z*/
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	putchar('\n');

	return (0);

}
