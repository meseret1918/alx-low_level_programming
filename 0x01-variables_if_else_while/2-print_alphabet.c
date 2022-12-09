#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * prints the alphabet in lowercase.
 *
 * return: always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
