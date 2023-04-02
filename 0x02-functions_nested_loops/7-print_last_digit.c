#include "main.h"

/**
 * print_last_digit - function that print and return the last digit of a number
 * @n: the number that will give you that last digite
 * Return: the last digit
 */

int	print_last_digit(int n)
{
	int	last;

	last = n % 10;
	_putchar(last);
	return (last);
}

