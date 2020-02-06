#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
putchar(i);
putchar(j);
if ((i == 57) && (j == 57))
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
