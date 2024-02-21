#include "main.h"

/**
 * int print_sign - print the sign of the number
 *
 * @n: number whose sign is to be checked
 *
 * Return: 1 & prints 1 for +n,
 * 0 & prints 0 for n = 0 and -1 and prints -1 for -n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
