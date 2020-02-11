#include<stdio.h>
#include<stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	char c[9] = {'h', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	for (a = 0; a <= 8; a++)
	{
		_putchar(c[a]);

	}
	putchar('\n');

	return (0);
}
