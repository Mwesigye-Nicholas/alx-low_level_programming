#include "main.h"

/**
 * print_diagonal - prints a diagonal lineon screen
 *
 * @n: number of times a diagonal will be printed
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 2)
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
