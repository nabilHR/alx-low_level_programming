#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	/* use single while loop */
	int	e;

	e = 'z';
	while (e >= 'a')
		putchar(e--);
	putchar('\n');
	return (0);
}
