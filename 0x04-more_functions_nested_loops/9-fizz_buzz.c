#include <stdio.h>

/**
 *main - print numbers
 *
 *Return: Always zero
 */

int main(void)
{
	int a, b, c;
	char nam1[] = "Fizz";
	char nam2[] = "Buzz";
	char nam3[] = "FizzBuzz";

	a = 0;
	while (a < 100)
	{
		a++;
		b = a % 3;
		c = a % 5;
		if (b != 0 && c != 0)
			printf("%d ", a);

		if (b == 0 && c != 0)
			printf("%s ", nam1);

		if (c == 0 && b != 0)
			printf("%s ", nam2);

		if (b == 0 && a == 0)
			printf("%s ", nam3);
	}
	printf("\n");
}

