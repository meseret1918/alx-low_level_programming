#include <stdio.h>

/**
 * main - Entry point
 * print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);

	printf("\n");

	return (0);
}
