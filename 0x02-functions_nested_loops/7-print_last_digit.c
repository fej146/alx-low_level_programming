#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: figure entered
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int m =	n % 10;

	if (m < 0)
		m = -m;
	_putchar(m + '0');
	else
		return (m);
}
