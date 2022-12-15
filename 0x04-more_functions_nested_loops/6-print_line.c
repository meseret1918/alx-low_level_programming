#include "main.h"

/**
  * print_line - a function that draws a straight line in the terminal
  * @n: The number of lines to draw
  *
  * Return: 0
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(100);
		}

		_putchar('\n');
	}
}

