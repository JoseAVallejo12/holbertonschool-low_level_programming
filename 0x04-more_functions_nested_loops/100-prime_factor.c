#include <stdio.h>

/**
 *main - print whint printf funtion
 *
 *Return: Always
 */

int main(void)
{
	long int n, div, maxFact;

	n = 612852475143;
	div = 2;
	maxFact = 0;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
	return (0);
}

