#include "main.h"

/**
*print_diagonal - print diagonal line
*@n: argument
*/
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
