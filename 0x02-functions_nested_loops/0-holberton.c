#include "holberton.h"
int _putchar(char c);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	char c[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	for (a = 0; a <= 8; a++)
	{
		_putchar(c[a]);

	}
	_putchar('\n');

	return (0);
}
