#include <stdio.h>

int _putchar(char c) {
    return putchar(c);
}

/**
 * main - Computes and prints the sum of multiples of 3 or 5 below 1024.
 *
 * Return: Always 0.
 */

int main(void)
{
    int limit = 1024;
    int sum = 0;
    int i;

    for (i = 1; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    int temp = sum;
    int digit, length = 0;

    // Calculate the number of digits in the sum
    while (temp != 0)
    {
        temp /= 10;
        length++;
    }

    // Print the sum using _putchar
    for (int j = length - 1; j >= 0; j--)
    {
        digit = sum / pow(10, j) % 10;
        _putchar(digit + '0');
    }

    _putchar('\n');

    return 0;
}
