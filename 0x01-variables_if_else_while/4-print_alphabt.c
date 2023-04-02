#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	/* use single while loop */
	int	a;
	int	z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
