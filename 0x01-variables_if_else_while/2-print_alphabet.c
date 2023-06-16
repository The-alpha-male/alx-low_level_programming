#include <stdio.h>
/**
 * Main - prints alphabets in lowercase
 * Return : 0 (success)
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
