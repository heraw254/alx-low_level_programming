#include <stdio.h>

/**
  * first_main - prints a sentence before main
  * execution
  */
void __attribute__ ((constructor)) first_main()
{
	printf("You are beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
