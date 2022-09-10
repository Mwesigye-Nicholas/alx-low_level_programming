#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Is always zero
 *
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++);
	putchar(a);
	putchar('\n');
	for (a = 'A'; a <= 'Z'; a++);
	putchar(a);
	return (0);
}
