#include "variadic_functions.h"

/**
 *  * prt_char - print Character
 *   * @datos: funtion type variadic
 *    */

void prt_char(va_list datos)
{
	printf("%c", va_arg(datos, int));
}

/**
 * prt_int - print Integer
 * @datos: funtion type variadic
 */

void prt_int(va_list datos)
{
	printf("%d", va_arg(datos, int));
}

/**
 * prt_float - print float
 * @datos: funtion type variadic
 */

void prt_float(va_list datos)
{
	printf("%f", va_arg(datos, double));
}

/**
 * prt_datos - print String
 * @datos: funtion type variadic
 */

void prt_datos(va_list datos)
{
	char *p;
	p = va_arg(datos, char *);
	if (p == NULL)
		p = "(nil)";
	
	printf("%s", p);
}

/**
 * print_all - prts anything.
 * @format: const Pointer const
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list datos;
	char *s = "";

	f_list  prts[] = {
		{"c", prt_char},
		{"i", prt_int},
		{"f", prt_float},
		{"s", prt_datos}
		};

	i = 0;
	va_start(datos, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == prts[j].opc[0])
			{
				printf("%s", s);
				prts[j].f(datos);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(datos);

}

