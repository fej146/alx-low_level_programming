#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to the binary digit
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int total = 0;
	int decimal = 1;
	int len = strlen(b);

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (int i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			total += decimal;
			decimal *= 2;
		}
	return (total);
	}
}
