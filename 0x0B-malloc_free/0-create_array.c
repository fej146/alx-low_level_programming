#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));/*allocates 1byte*s memory*/
	unsigned int i;

	if (arr == NULL)/*initialize pointer to NULL*/
		return (NULL);
	if (size == 0)
		return (NULL);/*Returns NULL if size = 0*/
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
