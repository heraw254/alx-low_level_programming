#include <stdio.h>

/**
  * first_main - prints a sentence before main
  * execution
  */
void __attribute__ ((constructor)) first_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
