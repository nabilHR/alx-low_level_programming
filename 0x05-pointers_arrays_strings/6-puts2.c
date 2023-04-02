#include "main.h"

/*
 * puts2 - function that print char and skip char
 * @str: the string should be printed
 */

void	puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
				break ;
		i = i + 2;
	}
}

