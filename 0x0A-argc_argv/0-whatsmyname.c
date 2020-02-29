#include "holberton.h"

/**
 *main - funtion
 *@argc: legenth of argv
 *@argv: number of argummet
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *p;
	int i;

	p = *(argv);

	if (argc == 1)
	{
		for (i = 0; *(p + i) != '\0'; i++)
			_putchar(*(p + i));
	}

	_putchar('\n');

	return (0);
}
