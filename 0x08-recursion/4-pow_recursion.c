#include "main.h"

/**
*_pow_recursion - used to calc x raised to the power of y
*@x: arg
*@y: arg
*
*Return: x the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

