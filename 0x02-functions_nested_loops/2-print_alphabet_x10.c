#include "main.h"

/**
 * print_alphabet_x10 - print 10 times all alphabete followed by a new line
 *
 */

void	print_alphabet_x10(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}

