#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters variatic
 * @n: first parameter, number of inter in variatic var
 * Return: Always a integer number (sum)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	va_start(numbers, n);

	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);

return (sum);
}
