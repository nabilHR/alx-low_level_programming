#include "main.h"

/**
 * print_most_numbers - print numbers
 */
void	print_most_numbers(void)
{
	int	s;
	int	e;

	s = '0';
	e = '0';
	while (s <= e)
	{
		if (s != '2' && s != '4')
			_putchar(s);
		s++;
	}
}

