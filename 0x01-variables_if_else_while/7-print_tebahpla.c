#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char reverse_alphabet;
	for (reverse_alphabet = 'z';reverse_alphabet >= 'a'; reverse_alphabet --)
		putchar(reverse_alphabet);
	putchar('\n');
	return (0);
}
