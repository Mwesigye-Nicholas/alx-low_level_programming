#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Is always 0
 *
 */
int main(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i);
	a++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
	putchar(a);
	a++;
	}
	putchar('\n');
	return (0);
}
