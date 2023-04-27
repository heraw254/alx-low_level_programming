#include <stdio.h>

/**
  * first - prints a sentence before main
  * execution
  */
void __attribute__ ((constructor)) first(void)
{
	printf("You are beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
