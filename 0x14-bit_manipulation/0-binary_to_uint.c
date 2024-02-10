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
	unsigned int total;
       
	total = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		total <<= 1;
		if (b[i] == '1')
		{
			total += 1;
		}
	}
	return (total);
}
