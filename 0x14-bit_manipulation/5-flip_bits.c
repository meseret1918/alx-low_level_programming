#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, A = n ^ m;

	while (A > 0)
	{
		bits = bits + (A & 1);
		A >>= 1;
	}

	return (bits);
}
