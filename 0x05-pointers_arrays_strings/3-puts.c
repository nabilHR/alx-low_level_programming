#include "main.h"

/**
 * _puts : function that print a given string
 * @str: the string should be printed
 */

void	_puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
