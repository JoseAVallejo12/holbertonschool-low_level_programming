#include "holberton.h"
#include <stdio.h>

/**
 *main - funtion
 *@argc: legenth of argv
 *@argv: number of argummet
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; *(argv + i) != '\0'; i++)
		printf("%s\n", argv[i]);

	return (0);
}

