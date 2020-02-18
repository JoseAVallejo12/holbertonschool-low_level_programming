#include "holberton.h"

/**
 *print_number - Print numeral signe n time
 *@n: Parameter
 *Return: always return zero
 */

void print_number(int n)
{
	int u2, u3, u4, d2, d3, d4, c;

	u2 = n / 10;
	u3 = n / 100;
	u4 = n / 1000;
	d2 = n % 10;
	d3 = ((n / 10) % 10);
	d4 = ((n /100) % 10);
	c = n % 10;

	if (n < 100)
	{
		_putchar(u2 + 48);
		_putchar(c + 48);
	}
	if (n >= 100 && n <= 999)
	{
		_putchar(u3 + 48);
		_putchar(d2 + 48);
		_putchar(c + 48);
		/*	}
			if (n >= 1000 && n <= 9999)
			{
			int d = 0;
			a = n / 1000;
			b = n % 10;
			c = ((n / 10) % 10);
			d = ((n / 100) % 10);
			_putchar(a + 48);
			_putchar(b + 48);
			_putchar(c + 48);
			}*/
}
}

