#include "main.h"

/**
 * _strlen - functio that reutrn the length of a string
 * @s: the string
 * Return: the length of the string
 */

int	_strlen(char *s)
{
	int	i;
	
	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
