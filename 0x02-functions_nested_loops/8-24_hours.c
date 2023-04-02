#include "main.h"

/**
 * jack_bauer - function that print from 00:00 for 23:59
 */

void	jack_bauer(void)
{
	int	i;
	int	n1;
	int	n2;
	int	n3;
	int	n4;

	i = 0;
	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '0';
	while (i < 1440)
	{
		if (n1 <= '2')
			_putchar(n1++);
		else
			_putchar(n1);
		if (n2 <= '3')
			_putchar(n2++);
		else
			_putchar(n2);
		_putchar(':');
		if (n3 <= '5')
			_putchar(n3++);
		else
			_putchar(n3);
		if (n4 <= '9')
			_putchar(n4++);
		else
			_putchar(n4);
		i++;
	}
}

