#include <stdio.h>

int main(void)
{
	int bin[100];
	int j;
	int n, i = 0;
	
	printf("Enter Number to convert: ");
	scanf("%d", &n);
	while(n > 0)
	{
		bin[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d\n", bin[j]);
	return (0);
}
