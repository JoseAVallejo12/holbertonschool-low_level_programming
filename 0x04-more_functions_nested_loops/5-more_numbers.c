#include "holberton.h"

/**
 *myprint - print values
 *Return: always void
 *@c: Parameter
 */

void myprint(int c)
{
	_putchar(c);
}

/**
 *more_numbers - print ten times the numbers 0 to 14
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
				myprint(b + 48);
			if (b > 9)
			{
				myprint(c + 48);
				myprint(d + 48);
			}
			b++;
		}
		myprint('\n');
		b = 0;
		a++;
	}
}

