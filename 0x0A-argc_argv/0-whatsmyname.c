#include <stdio.h>

/**
 * main - a program that prints its name
 *@argc: int
 *@argv: char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
