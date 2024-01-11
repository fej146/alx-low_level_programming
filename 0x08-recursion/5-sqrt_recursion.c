#include "main.h"
/**
 * _sqrt - checks for the square root of a number
 * @n: number
 * @s: square root of number
 * Return: square root
 */
int _sqrt(int n, int s)
{
	if (s * s == n)
	{
		return (s);
	}
	else if (s * s > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, s + 1));
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
