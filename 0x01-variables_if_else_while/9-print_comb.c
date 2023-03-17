#include <stdio.h>

/**
  *main - Entry point
  *Description: 'Print all possible combinations of all single-digits'
  *Return: always 0
  */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
