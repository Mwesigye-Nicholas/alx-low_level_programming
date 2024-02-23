#include "main.h"

/**
 * _abs - checks the absolute value of the number
 *
 * @i: value whose absolute value is to be checked
 *
 * Return: absolute value of un integer
 */


int _abs(int i)
{

	if (i < 0)
	{

		int abs_val = i * -1;

		return (abs_val);
	}
	return (i);
}
