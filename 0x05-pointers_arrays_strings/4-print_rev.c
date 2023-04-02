#include "main.h"

/**
 * print_rev - function that print a string in reverse order
 * @s: the string should be printed
 */

void	print_rev(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	len--;
	while (len >= 0)
		_putchar(s[len--]);
}
