#include "main.h"

/**
 *  _isupper - detect upper case alphabet
 *
 * @c: to be checked whether its uppercase
 *
 * Return: (1) for true (0) false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
