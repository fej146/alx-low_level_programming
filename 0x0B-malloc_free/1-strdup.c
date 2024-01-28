#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int len = 0, i, j;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)/*loop for string length*/
		len++;
	copy = malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		copy[j] = str[j];
	copy[len] = '\0';
	return (copy);
}
