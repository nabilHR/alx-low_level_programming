#include "main.h"

/**
 * _isalpha - funct that tested if a char is alphabete or not
 * @c: the char that should be tested
 * Return: 1 if the c char
 * or 0 if not
 */

int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

