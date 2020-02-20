#include "holberton.h"

/**
 *_strncpy - funtion concatenate string
 *@dest: Parameter in
 *@src: Parameter to join
 *@n: Bytes numbers
 *Return: String
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n)
	{
		dest[b] = src[b];
		b++;
		if (src[b] == '\0')
		{
			for (; b != n; b++)
				dest[b] = '\0';
			break;
		}
	}
	return (dest);
}

