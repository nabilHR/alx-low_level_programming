#include "main.h"

/*
 * reverse_array - function that reverse elements of an array type int
 * @a: array of integers
 * @n: size of array
 */

void	reverse_array(int *a, int n)
{
	int	i;
	int	temp;

	i = 0;
	n--;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}

