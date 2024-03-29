#include "function_pointers.h"

/**
  * main - a program that prints the opcodes of its own main function
  * @argc: count number of argument
  * @argv: number of argument
  *
  * Return: 0 if success, 1 if argc != 2 or 2 if bytes_nb < 0
 */

int main(int argc, char **argv)
{
	int (*f)(), i = 0;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	f = main;
	p = (unsigned char *)f;

	while (i < atoi(argv[1]))
	{
		if (i != 0)
			printf(" ");
		printf("%02x", p[i++]);
	}
	printf("\n");
	return (0);
}
