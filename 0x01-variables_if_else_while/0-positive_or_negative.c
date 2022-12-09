#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main prints the last digit of arandom generating number, whether
 *   >5, <6 or 0.
 *
 *  return: always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);

}

