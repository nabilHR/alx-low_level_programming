#include "main.h"

/**
 * _isupper - function return if a char is upper or not
 * @c: the char should be tested
 * Return: return 1 if its true
 * 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

