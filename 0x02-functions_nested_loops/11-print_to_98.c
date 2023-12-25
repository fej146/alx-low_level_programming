#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers to 98
 * @n: parameter entered
 * Returns: integer
 */
void print_to_98(int n)
{
	for (n >= 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
		n--;
	}
	for (n <= 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d,", n);
		}
		n++;
	}
	_putchar('\n');
}
