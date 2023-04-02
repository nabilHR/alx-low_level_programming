#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int	a;
	int	z;

	a = 'a';
	z = 'z';
	/* start the while loop to print all alphabet*/
	while (a <= z)
		putchar(a++);
	putchar('\n');
	return (0);
}
