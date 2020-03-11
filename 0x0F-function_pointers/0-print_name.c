#include "function_pointers.h"

/**
 * print_name - funtion
 * @name: pointer char
 * @f: ponter to funtion recive
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

