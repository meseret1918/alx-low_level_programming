#include "main.h"
#include <math.h>

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: number to be printed in binnary.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar ('1');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
