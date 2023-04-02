#include <stdlib.h>

/**
 * _strlen - function that calculate the length of a string
 * @str: the string that will be calculated
 * Return: the length of the string
 */

int	_strlen(char  *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strccat - function that concatenate two string in a singl string
 * @dest: the result should here
 * @src: the string that will be concatenated with dest
 * Return: the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = _strlen(dest);
	while (src[i] && i <= n)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}

