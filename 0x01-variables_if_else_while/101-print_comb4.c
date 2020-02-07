#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int y;
int b;
int z;
int c;

b = 49;
c = 50;
for (x = 48; x < 56; x++)
	{
	b = 1 + x;
	for (y = b; y < 57; y++)
	{
		c = 1 + y;
		for (z = c; z < 58; z++)
		{
			if (x != y && x != z && y != z)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x == 55 && y == 56 && z == 57)
				{
					continue;
				}
				putchar(44);
				putchar(' ');
			}
		}
	}
	}
	putchar(10);
	return (0);
	}
