#include <stdlb.h>
#include <string.h>

/**
 * str_concat - This function concatenates two stirngs
 * @s1: Pointer to char type
 * @s2: Pointer to char type
 *
 * Return: char type
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated_str;

	size_t len_s1 = strlen(s1);
	size_t len_S2 = strlen(s2);
	size_t total = len_s1 + len_s2 + 1;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	concatenated_str = (char *)malloc(total * sizeof(char));

	if (concatenated_Str ==NULL)
		return (NULL);
	strcpy(concatenated_str, s1);
	strcat(concatenated_str, s2);

	return (concatenated_str);
}
