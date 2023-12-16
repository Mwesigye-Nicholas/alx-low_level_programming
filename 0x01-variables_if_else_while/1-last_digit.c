#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main function
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int temp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	temp = n % 10;

	if (temp > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, temp);
	}
	else if (temp == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, temp);
	}
	else if (temp < 6 && temp != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, temp);
	}
	return (0);
}
