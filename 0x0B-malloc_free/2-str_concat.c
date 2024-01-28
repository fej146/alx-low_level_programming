#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *output;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	output = malloc(sizeof(char) * (len1 + len2) + 1);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		output[i] = s1[i];/*copies s1 to the address of output*/
	for (j = 0; j < len2; j++)
	{
		output[i] = s2[j];/*continues s2 from the end of s1 address*/
		i++;
	}
	output[len1 + len2] = '\0';
	return (output);
}
