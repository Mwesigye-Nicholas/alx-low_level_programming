#include <stdio.h>

/**
 * main -entry point
 *
 * Return: alwyas zero
 *
 */
int main(void)
{
	int x;

	for (x = 10; x < 20; x++)
	{
	putchar((x % 10) + '0');
	if (x != 19)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

