#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string (s1 + n bytes of s2).
 *         NULL on failure (memory allocation or if s1 is NULL).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = (s1 != NULL) ? 0 : 0;
	unsigned int len_s2 = (s2 != NULL) ? 0 : 0;
	unsigned int i, j;
	char *result;

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		len_s1++;
	for (i = 0; s2 != NULL && s2[i] != '\0'; i++)
		len_s2++;
	if (n >= len_s2)
		n = len_s2;
	result = malloc(sizeof(char) * (len_s1 + n + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	
	return (result);
}

