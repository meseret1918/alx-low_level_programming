#include "main.h"

/**
 * main - a function that prints the alphabets in lowercase.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
