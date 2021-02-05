#include <stdio.h>

/**
 * main - print 00 to 99
 *
 * Return: zero
 */
int main(void)
{
	char ch;
	char i;
	char j;

	for (ch = 'a'; ch <= 'd'; ch++)
		putchar(ch);
	for (i = 'f'; i <= 'p'; i++)
		putchar(i);
	for (j = 'r'; j <= 'z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
