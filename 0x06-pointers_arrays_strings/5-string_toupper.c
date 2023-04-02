#include "main.h"

/**
 * string_toupper - function that change the lower cases to UPPER cases
 * @s: the string should be handled
 * Return: the new String
 */

char	*string_toupper(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

