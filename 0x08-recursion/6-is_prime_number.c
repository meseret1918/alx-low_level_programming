#include "main.h"

/**
 * prime_checker - if number is prime evaluate from 1 to n
 * @x: input number
 * @y: number iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int prime_checker(int x, int y)
{
        if (x == y)
                return (1);
        else if (x % y == 0)
                return (0);
        return (prime_checker(x, y + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: input Number
 *
 * Return: On success 1
 * On error, -1 is returned
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, 2));
}
