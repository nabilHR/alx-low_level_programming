#include "main.h"

/**
 * print_sign - funct that check the sign of a number
 * @n: the number that should be tested
 * Return: 1 if its n > 0
 * 0 if n is 0
 * or -1 if n is n < 0
 */

int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	return (0);
}

