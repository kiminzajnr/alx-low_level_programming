#include <stdio.h>
#include <stdlib.h>

/**
  * main - introduction to malloc and free
  *
  * Return: 0
  */
int main(void)
{
	int *tab;
	
	tab = malloc(sizeof(*tab) * 3);
	tab[0] = 98;
	tab[1] = -1024;
	tab[2] = 402;
	printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
	return (0);
}
