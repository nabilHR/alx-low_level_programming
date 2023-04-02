#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: the number that we will calculate the absolute value
 * Return: that absolute value
 */

int	_abs(int n)
{
	if (n >= 0)
		return (n);
	return (n * (-1));
}

