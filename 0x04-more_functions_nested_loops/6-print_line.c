#include "main.h"

/**
 * print_line - print line
 * @n: number of times that _ must print
 */
void	print_line(int	n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

