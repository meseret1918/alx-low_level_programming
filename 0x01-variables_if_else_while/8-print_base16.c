#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	int dgit;

	for (dgit = 0; dgit < 10; dgit++)
		putchar((dgit % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
