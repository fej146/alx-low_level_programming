#include "main.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: holds value of a
 * @b: holds value of b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
