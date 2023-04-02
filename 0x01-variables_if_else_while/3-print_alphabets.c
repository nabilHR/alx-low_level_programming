#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	/* use while loop twice to print low and uper case alphabet */
	int	a;
	int	z;

	a = 'a';
	z = 'z';
	while (a <= z)
		putchar(a++);
	a = 'A';
	z = 'Z';
	while (a <= z)
		putchar(a++);
	putchar('\n');
	return (0);
}
