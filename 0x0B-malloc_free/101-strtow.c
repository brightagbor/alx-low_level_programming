#include <stdlib.h>
#include <string.h>

/**
 * strtow - function that splits a string into words.
 * @str: Pointer of type char
 *
 * Return: Pointer of char type
 */
char **strtow(char *str)
{
    int i, j, word_index = 0, word_length = 0, num_words = 0;
    char **words;

    if (str == NULL || str[0] == '\0') {
        return NULL;
    }

    /* Count the number of words (maximum potential words is the length of the string) */
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && (i == 0 || str[i - 1] != ' ')) {
            num_words++;
        }
    }
    if (str[strlen(str) - 1] != ' ') {
        num_words++;
    }

    /* Allocate memory for the array of strings (words) and an extra element for NULL */
	ords = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    /* Iterate through the string to extract words */
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            word_length++;
        } else if (word_length > 0) {
            words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
            if (words[word_index] == NULL) {
                /* Free allocated memory and return NULL on failure */
                for (j = 0; j < word_index; j++) {
                    free(words[j]);
                }
                free(words);
                return NULL;
            }

            /* Copy the word into the array */
            strncpy(words[word_index], str + i - word_length, word_length);
            words[word_index][word_length] = '\0';

            word_index++;
            word_length = 0;
        }
    }

    /* Handle the last word */
    if (word_length > 0) {
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            /* Free allocated memory and return NULL on failure */
            for (j = 0; j < word_index; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }

        /* Copy the last word into the array */
        strncpy(words[word_index], str + strlen(str) - word_length, word_length);
        words[word_index][word_length] = '\0';

        word_index++;
    }

    /* Set the last element to NULL */
    words[word_index] = NULL;

    return words;
}

