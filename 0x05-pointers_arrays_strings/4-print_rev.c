#include "main.h"
#include <string.h>

/**
*print_rev - print revers character
*@s: string parm
*/

void print_rev(char *s)
{
	int x, i;

	x = strlen(s);
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
