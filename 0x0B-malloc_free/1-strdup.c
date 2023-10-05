#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space 
 * in memory
 * @str: Pointer to type char
 *
 * Return: It returns a char type
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int length;

	if (str == NULL)
		return (NULL);

	length = 0;

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return duplicate;

}
