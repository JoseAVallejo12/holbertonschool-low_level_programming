#include "holberton.h"

/**
 * binary_to_uint - funtion convert binary to int
 * @b: var pointer to char
 * Return: integer value or 0 if failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	/* if string is empty return 0 */
	if (b == NULL)
		return (0);

	/* Validate each elemt in the array find only 1 & 0 */
	for (i = 0; b[i] != '\0'; i++)
		if (b[i]  != '0' && b[i] != '1')
			return (0);

	/* converter array the number bynari to integer */
	for (i = 0; b[i] != '\0'; i++)
	{
		num *= 2;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
