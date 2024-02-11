#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @n: integer given
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
		return ((n & 1));
}
