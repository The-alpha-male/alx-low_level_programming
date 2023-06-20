/*
 * print_putchar.c
 *
 * This program prints the string "_putchar" followed by a new line.
 *
 * Usage:
 *   ./print_putchar
 *
 * Author: The-alpha-male
 */

#include <stdio.h>
#include "main.h"

/**
 * main - Prints the string "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void) {
  /* Prints the character '_'. */
  _putchar('_');

  /* Prints the character 'p'. */
  _putchar('p');

  /* Prints the character 'u'. */
  _putchar('u');

  /* Prints the character 't'. */
  _putchar('t');

  /* Prints the character 'c'. */
  _putchar('c');

  /* Prints the character 'h'. */
  _putchar('h');

  /* Prints the character 'a'. */
  _putchar('a');

  /* Prints the character 'r'. */
  _putchar('r');

  /* Prints a new line. */
  putchar('\n');

  /* Returns 0 to indicate success. */
  return 0;
}
