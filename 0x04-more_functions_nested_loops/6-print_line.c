#include "main.h"

/**
 * print_line - prints a stright line
 *
 * @n: parameter to help us print the line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
