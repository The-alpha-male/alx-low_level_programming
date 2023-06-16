#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and the uppercase using putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*initialize char*/
	char alphabet;
	/*lowercase for loop*/
	for (l_alphabet = 'a'; l_alphabet <='z'; l_alphabet ++)
		putchar(l_alphabet);
	
	/*uppercase loop*/
	for (up_alphabet = 'A'; up_alphabet <= 'Z'; up_alphabet ++)
		putchar(up_alphabet);

	putchar('\n');
	
	return (0);

}
