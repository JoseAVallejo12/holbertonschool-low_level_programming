#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int f;
int y;

f = 49;
for (x = 48; x < 58; x++)
{
for (y = f; y < 58; y++)
{
if (x != y)
{
putchar(x);
putchar(y);
if (x == 56 && y == 57)
{
continue;
}
putchar(44);
putchar(' ');
}
}
f = f + 1;
}
putchar(10);
return (0);
}
