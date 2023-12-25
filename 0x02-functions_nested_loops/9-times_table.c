#include "main.h"
/**
 * times_table - prints only the 9 times table and return void
 */
void times_table(void)
{
	int c, m, multiply;

	for (c = 0; c < 10; c++)
	{
		for (m = 0; m < 10; m++)
		{
			multiply = c * m;
			if (multiply == 0 && multiply < 10)
			{
				_putchar(multiply + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (multiply >= 10)
			{
				_putchar(multiply + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
