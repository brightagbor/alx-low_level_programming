#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block.
 * @new_size: New size for the reallocation.
 *
 * Return: Pointer to the reallocated memory block.
 *         NULL on failure (memory allocation or invalid parameters).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return malloc(new_size);
	if (new_size == old_size)
		return ptr;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size < old_size)
		memcpy(new_ptr, ptr, new_size);
	else
		memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}

