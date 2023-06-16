#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and then in uppercase
 * using putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char l_alphabet, up_alphabet;

	for (l_alphabet = 'a'; l_alphabet <='z'; l_alphabet ++)
		putchar(l_alphabet);
	

	for (up_alphabet = 'A'; up_alphabet <= 'Z'; up_alphabet ++)
		putchar(up_alphabet);

	putchar('\n');
	
	return (0);

}
