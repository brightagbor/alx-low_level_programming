#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated and initialized memory.
 *         NULL on failure (memory allocation, nmemb or size is 0).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
       	void *ptr;
	unsigned int total_size;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	if (nmemb != total_size / size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, total_size);
	
	return (ptr);
}

