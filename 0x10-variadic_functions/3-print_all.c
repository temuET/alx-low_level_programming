#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*print_all - function that prints everything
*@format: all args passed to the function
*
*Return: nothing
*/
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list a_args;
	char *str, *separator;

	va_start(a_args, format);
	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(a_args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(a_args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(a_args, double));
				break;
			case 's':
				str = va_arg(a_args, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ",";
		i++;
	}
	va_end(a_args);
	printf("\n");
}
