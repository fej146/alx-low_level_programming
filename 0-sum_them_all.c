#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: Parameters passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int a;
	va_list fej;

	va_start(fej, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
		result += va_arg(fej, it);

	va_end(fej);

	return (result);
}
