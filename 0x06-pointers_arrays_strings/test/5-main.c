#include <stdio.h>

/**
  * main - dereferencing pointers
  *
  * Return: Always 0
  */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Value of '*p': %d\n", *p);
	*p = 402;
	printf("Value of 'n': %d\n", n);
	printf("Value of 'p': %p\n", p);
	printf("Value of '*p': %d\n", *p);
	return (0);
}
