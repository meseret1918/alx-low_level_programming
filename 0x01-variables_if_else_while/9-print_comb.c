#include <stdio.h>

/**
 * main - prints all possible combination s of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dgit;

	for (dgit = 0; dgit <= 9; dgit++)
	{
		putchar((dgit % 10) + '0');
	if (dgit == 9)
		continue;

	putchar(',');
	putchar(' ');
}
putchar('\n');

return (0);
}
