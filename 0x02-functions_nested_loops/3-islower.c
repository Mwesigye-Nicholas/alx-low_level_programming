#include "main.h"


/**
 * _islower - checks lower case characters
 *
 *
 * Return: 1 if c is lowercase & 0 otherwise
 * @c: parameter
 */


int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
