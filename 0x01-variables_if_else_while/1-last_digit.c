#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
	int n;

	int lastin;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastin = n % 10;

	if (lastin > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastin);
	}

	else if (lastin == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastin);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastin);
	}
	return (0);
}
