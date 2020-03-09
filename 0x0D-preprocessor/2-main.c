#include <stdio.h>

/**
 *main - Program
 *
 *Return: Always 0
 */

int main(void)
{
	char *c = __FILE__;
	int i;

	for (i = 0; *(c + i) != '\0'; i++)
		putchar(c[i]);

	putchar('\n');

	return (0);
}

