#include "main.h"

/**
 * main -print _ putchar
 *
 * Return: always 0
 *
 */
int main(void)
{
	char putchar[] = "_putchar";
	int x = 0;

	while (putchar[x] != '\n')
	{
	_putchar(putchar[x]);
	x++;
	}
	_putchar('\n');
	return (0);
}
