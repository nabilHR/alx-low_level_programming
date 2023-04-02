#include "main.h"

/**
 * print_numbers - print numberes from 0 to 9
 */
void	print_numbers(void)
{
	int	s;
	int	e;

	s = '0';
	e = '9';
	while (s <= e)
		_putchar(s++);
	_putchar('\n');
}

