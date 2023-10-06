#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -This function creates a array of chars and initialies
 * it within a specific char
 * @size: Variable with type unsigned int
 * @c: Variable of type char
 *
 * Return: It returns a char type
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));	
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
