#include "main.h"

/**
 * times_table - that prints the 9 times table, starting with 0
 *
 * Description: prints a multiplication table
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{

		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 0; j <= 9; j++)
		{
			k = (i * j);

			if ((k / 10) > 10)
			{
				_putchar((k / 10) +  '0')
			}
			else
			{
				_putchar(' ');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
