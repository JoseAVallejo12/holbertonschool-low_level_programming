#include"holberton.h"
/**
 *printed - void
 *times_table - void
 *Return: 1 for lower case or 0 for otherwise
 */
void printed(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

void times_table(void)
{
	int x = 0, y = 0, z = 0, n = 0, m = 0;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (m == 0)
			{
				_putchar('0');
				if (y != '9')
				{
					printed();
				}
			}
			z = m * n;
			if ((m >= 1) && (z <= 9))
			{
				_putchar((m * n) + '0');

				if (y != '9')
				{
					printed();
				}
			}
			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
				if (y != '9')
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			n += 1;
		}
		_putchar('\n');
		m += 1;
		n = 0;
	}
}

