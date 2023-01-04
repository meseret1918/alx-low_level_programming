#include "main.h"

int squareroot(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: On Success 1
 * On error, -1 is returned
 */
int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}
/**
 * squareroot - checks perfect square from 1 to n
 * @n: input number
 * @i: counter from 1 to n
 * Return: On success 1
 * On error, -1 is returned
 */
int squareroot(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (squareroot(n, i + 1));
}
