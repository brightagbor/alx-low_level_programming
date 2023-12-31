#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: Pointer to the allocated memory
 *         Exit with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
