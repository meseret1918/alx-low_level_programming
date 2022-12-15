#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0 - 9 followed by a new line
 */
void print_most_numbers(void)
{
	int z;

	for (z = 48; z <= 57; z++)
	{
		if ((z != 50) && (z != 52))
			{
			_putchar(z);
			}
	}
	_putchar('\n');
}
