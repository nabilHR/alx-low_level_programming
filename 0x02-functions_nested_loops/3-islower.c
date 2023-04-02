#include "main.h"

/**
 * _islower - funct that check if a char is lower or not
 * @c: the charactere that should be tested
 *
 * Return: 1 if success
 * 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

