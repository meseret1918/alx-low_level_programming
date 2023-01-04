#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: input integer
 * Return: On Success 1
 * On error, -1 is returned
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
