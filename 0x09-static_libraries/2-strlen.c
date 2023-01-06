#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: input charactor
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int sum = 0, i = 1;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
