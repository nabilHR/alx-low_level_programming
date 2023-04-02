#include "main.h"

/**
 * print_alphabet - print all alphabete in lower case
 *
 */

void print_alphabet(void)
{
	int	s;
	int	e;

	s = 'a';
	e = 'z';
	while (s <= e)
		_putchar(s++);
	_putchar('\n');
}

