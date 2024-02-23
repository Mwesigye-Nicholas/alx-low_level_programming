#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: a number whose last digit to be printed
 *
 * Return: The digit of the number
 */

int print_last_digit(int i)
{
	int digit = i % 10;

	if (digit < 0)
	{
		digit =  digit * -1;
	}
	_putchar(digit + '0');

	return (digit);
}
