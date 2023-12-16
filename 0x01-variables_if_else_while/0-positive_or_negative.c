#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0
 */

int main(void)
{
	int n = 1;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
