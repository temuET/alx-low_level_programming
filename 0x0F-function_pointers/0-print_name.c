#include "function_pointers.h"
#include <stdio.h>
/**
*print_name - print name
*@name: name char
*@f: function pointer
*
*Return: 0
*/


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
