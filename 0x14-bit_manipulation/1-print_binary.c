#include "main.h"
/**
 * print_2 - prints the binary of n
 * @n: unsigned lont int n
 * Returns: 0
 */
void print_2(unsigned long int n)
{
	if (n == 0)
		return (0);
	print_2(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	else if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_2(n);
	}
}
