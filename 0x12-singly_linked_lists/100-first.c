#include <stdio.h>

/**
  * startupfunc - executes before main function is executed.
  * Return: nothing.
  */
void startupfunc(void) __attribute__ ((constructor));
void startupfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
