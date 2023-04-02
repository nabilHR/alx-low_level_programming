#include "main.h"

/**
 * _strcmp - function that compare two string
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if there are equale
 * !0 if not
 */

int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

