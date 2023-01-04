#include "main.h"

/**
 * _pow_recursion - prints the value of x raised to the power of y
 * @x: input integer
 * @y: input power
 * Return: On Success 1
 * On error, -1 is returned
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
