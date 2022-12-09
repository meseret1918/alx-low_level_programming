#include <stdio.h>

/**
 * main - a program that prints all possible combination of two 
 * 2-digit numbers
 *
 * return: always 0 (success)
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <=98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 == 98 && n2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
