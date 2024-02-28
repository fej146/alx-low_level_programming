#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list fej;

	va_start(fej, n);

	if  (separator == NULL)
		separator = "";

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(fej, int));
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(fej);
}
