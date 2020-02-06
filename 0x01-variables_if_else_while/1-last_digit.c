#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, u;
srand(time(0));
n = rand() - RAND_MAX / 2;
u = n % 10;
if (u > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, u);
}
if (u == 0)
{
printf("Last digit of %d is %d and is 0\n", n, u);
}
if ((u < 6) && (u != 0))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, u);
}

return (0);
}
