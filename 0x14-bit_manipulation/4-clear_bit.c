#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: pointer to integer
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = 1;
	i = i << index;
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	if ((((*n) >> index) & 1) == 1)
		*n = *n ^ i;
	return (1);
}
