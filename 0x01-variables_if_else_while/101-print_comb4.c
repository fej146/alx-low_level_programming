#include <stdio.h>
/**
 * main - Point of Entry for the code
 * Return: 0
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (a == '0'; a <= '9'; a++)
			{
				if (!((a == b) || (b == c) || (b > a) || (c > b)))
				{
					putchar(c + '0');
					putchar(b + '0');
					putchar(a + '0');
					if (!(a == '9' && b == '8' && c == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
