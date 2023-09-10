#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
 * Filename: 0-positive_or_negative.c.c
 * Author: eren
 * Date: September 10, 2023
 * Description: positive_or_negative.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	return (0);
}
