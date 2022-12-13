#include "main.h"

/**
 * main - a function that prints the alphabet in lowercase,follwed by a new line
 * 
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter ='a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
