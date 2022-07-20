#include "main.h"

/**
* _print_rev_recursion - print the reversed string
* @s: arg
*
*Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar(10);
	}
}
