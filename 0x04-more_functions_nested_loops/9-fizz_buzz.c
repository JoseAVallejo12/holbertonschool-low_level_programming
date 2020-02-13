#include <stdio.h>

/**
 *myprint - print whint printf funtion
 *@name: Parameter
 *@n: Parameter
 */
void myprint(char name[], int n)
{
	printf("%s", name);
	if (n != 100)
		printf(" ");
}

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
		{
			printf("%d", a);
			printf(" ");
		}
		if (b == 0 && c != 0)
			myprint(nam1, a);

		if (c == 0 && b != 0)
			myprint(nam2, a);

		if (b == 0 && c == 0)
			myprint(nam3, a);
	}
	printf("\n");
	return (0);
}

