#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, a;
int y, b;
int z, c;

a = 48;
b = 49;
c = 50;
for (x = a; x < 56; x++)
{
for (y = b; y < 57; y++)
{
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
c = c + 1;
}
c = 51;
b = b + 1;
}
b = 50;
}
putchar(10);
return (0);
}
