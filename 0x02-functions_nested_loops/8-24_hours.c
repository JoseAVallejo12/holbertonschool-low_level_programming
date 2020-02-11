#include"holberton.h"

/**
 *jack_bauer - void
 *
 *Return: 1 for lower case or 0 for otherwise
 */

void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			if (x < y)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				_putchar(58);
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
				_putchar('\n');
			}
		}
	}
}

