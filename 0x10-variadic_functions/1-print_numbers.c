#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separator betwin numbers
 * @n: len of the variatic funtion
 * Return: Alway void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(num, int));
			if (i != n - 1)
				printf("%s ", separator);
		}
		
	printf("\n");
	}
	va_end(num);

}

