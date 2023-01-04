#include "main.h"

/**
 * palindrome - obtains length of string x
 * @x: input string
 * @l: integer to count length of string
 *
 * Return: On success 1
 * On error, -1 is returned
 */
int palindrome(char *x, int l)
{
	if (*x == 0)
		return (l - 1);
	return (palindrome(x + 1, l + 1));
}
/**
 * palindrome2 - compares string vs string reverse
 * @x: input string
 * @l: length of string
 *
 * Return: On success 1
 * On error, -1 is returned
 */
int palindrome2(char *x, int l)
{
	if (*x != *(x + l))
		return (0);
	else if (*x == 0)
		return (1);
	return (palindrome2(x + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int is_palindrome(char *s)
{
	int l;

	l = palindrome(s, 0);
	return (palindrome2(s, l));
}
