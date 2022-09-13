#include "main.h"

/**
 * main -print _ putchar
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	char putchar[] = "_putchar";
	int x = 0;

	while (putchar[x] != '\0')
	{
	_putchar(putchar[x]);
	x++;
	}
	_putchar('\n');
	return (0);
}
