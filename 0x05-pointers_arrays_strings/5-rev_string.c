#include "main.h"

/*
 * rev_string - function that revese a string 
 * @s: the string should be reversed
 */

void	rev_string(char *s)
{
	int	len;
	int	st;
	int	en;
	char	temp;

	st = 0;
	len = 0;
	en = 0;
	while (s[len])
	{
		len++;
	}
	en = len - 1;
	while (st != en)
	{
		temp = s[st];
		s[st] = s[en];
		s[en] = temp;
		st++;
		en--;
	}
}

