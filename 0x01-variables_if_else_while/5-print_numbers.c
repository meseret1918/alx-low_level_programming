#include <stdio.h>

/**
 * main - entry point
 * a program that prints all single digit numbers of base 10 
 * starting from 0, followed by a new line
 *
 * return: always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);

	printf("\n");

	return (0);
}
