#include "main.h"
/**
 * _sqrt - checks for the square root of a number
 * @n: number
 * @s: square root of number
 * Return: square root
 */
int _sqrt(int a, int s)
{
	if (s * s == a)
	{
		return (s);
	}
	else if (s * s > a)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(a, s + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt(1, n));
	}
}
