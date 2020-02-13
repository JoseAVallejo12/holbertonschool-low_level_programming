#include "holberton.h"

/**
 *more_numbers - Print number of 0 to 9 and exclude 2, and 4
 *Return: always void
 */

void more_numbers(void)
{
	int a, b, c, d;

	a = 0;
	b = 0;
	while (a < 10)
	{
		c = 0;
		d = 0;
		while (b <= 14)
		{
			c = b / 10;
			d = b % 10;
			if (b <= 9)
				_putchar(b + 48);
			if (b > 9)
			{
				_putchar(c + 48);
				_putchar(d + 48);
			}
			b++;
		}
		_putchar('\n');
		b = 0;
		a++;
	}
}

