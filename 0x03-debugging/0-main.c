#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* positive_or_negative - for debugging
* Return: 0
*/
int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero", n);
	return (0);
}
