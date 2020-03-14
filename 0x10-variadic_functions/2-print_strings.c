#include "variadic_functions.h"

/**
 * print_strings - print chain of the char
 * @separator: separator betwin numbers
 * @n: len of the variatic funtion
 * Return: Alway void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	char *p;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(num, char *);
		if (p != NULL)
		{
			printf("%s", p);
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");

}
