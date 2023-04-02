/*
 * _strncpy - function that copy the src string in dest buffer with spicific size (n)
 * @dest: the result should be here
 * @src: the string where i will take a copy
 * @n: the lenght should by copy
 * Return: the new dest
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

