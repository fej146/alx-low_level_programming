#include "main.h"
/**
 * flip_bits - number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		count++;
	}
	return (count);
}
