#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers to 98
 * @n: parameter entered
 * Returns: integer
 */
void print_to_98(int n)
{
	for (n > 97; n--)
	{
		while (n > 98)
			printf("%d, ", n);
		printf("98");
	}
	for (n < 99; n++)
	{
		while (n < 98)
		{
			printf("%d, ", n);
		}
		printf("98");
	}
	_putchar('\n');
}
