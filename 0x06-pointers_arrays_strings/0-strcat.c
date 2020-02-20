#include "holberton.h"

/**
 **_strcat - funtion concatenate string
 *@dest: Punter
 *@src: Punter
 *Return: String
 */

char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	m = 0;
	while (dest[n] != '\0')
		n++;
	while (src[m] != '\0')
	{
		dest[n] = src[m];
		m++;
		n++;
	}
	n++;
	dest[n] = '\0';
	return (dest);
}

