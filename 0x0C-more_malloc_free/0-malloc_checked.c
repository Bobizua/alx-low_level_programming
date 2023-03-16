#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: memory to be allocated
 *
 * Return: pointer ro allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *g = malloc(b);

	if (g == NULL)
		exit(98);

	return (g);
}
