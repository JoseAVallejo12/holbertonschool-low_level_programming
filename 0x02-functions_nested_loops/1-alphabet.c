#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"

/**
 * print_alphabet - 1-alphabet
 * Return: alwayss 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
