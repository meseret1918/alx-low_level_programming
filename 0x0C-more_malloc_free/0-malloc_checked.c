#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size to allocate
 *
 * Return: pointer to allocated memory
 * or 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);

}
