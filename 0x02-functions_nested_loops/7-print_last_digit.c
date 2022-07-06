#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*@x: parameter
*Return: the value of the last digit
*/
int print_last_digit(int x)
{
	int a;

	if (x < 0)
	{
		x = -x;
	}
	a = x % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
