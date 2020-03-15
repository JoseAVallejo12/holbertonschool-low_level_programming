#include "variadic_functions.h"

/**
 * print_all - prts anything.
 * @format: const Pointer const
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list datos;
	char *s = "cifs";
	char *p;
	char *space = "";

	va_start(datos, format);
	
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == s[j])
			{
				printf("%s", space);
				space = ", ";
				switch(s[j])
				{
					case 'c':
						printf("%c", va_arg(datos, int));
						break;

					case 'i':
						printf("%d", va_arg(datos, int));
						break;

					case 'f':
						printf("%f", va_arg(datos, double));
						break;

					case 's':
						p = va_arg(datos, char *);
						if (p == NULL) 
							p = "(nil)";
						printf("%s", p);
						break;
					
					default: break;

				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(datos);

}

