#ifndef VARIADIC__FUNCTIONS_H
#define VARIADIC__FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct funtions - struct for switch
 * @opc: char string
 * @f: pointer to funtions
 */

typedef struct funtions
{
	char *opc;
	void (*f)();
} f_list;

#endif

