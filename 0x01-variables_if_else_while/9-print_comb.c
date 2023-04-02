#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	/* use single while loop */
	int	s;

	s = '0';
	while (s <= '9')
	{
		putchar(s);
		if (s != '9')
		{
			putchar(',');
			putchar(' ');
		}
		s++;
	}
	putchar('\n');
	return (0);
}
