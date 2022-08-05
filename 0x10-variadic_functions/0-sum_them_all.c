#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - sum up all va list
*@n: a single parameter
*
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list my_numbers;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(my_numbers, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(my_numbers, int);
	}
	va_end(my_numbers);
	return (sum);

}
