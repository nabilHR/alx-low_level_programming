#include "main.h"

/**
 * _isdigit - function test if c is digit or not
 * @c:the char should be tested
 * Return: 1 if true 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

