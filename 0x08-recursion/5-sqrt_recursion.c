#include "main.h"

/**
*_sqrt_recursion - natural square root of numbers
*@n: arg
*Return: square root of a number
*/

int _sqrt_recursion(int n)
{

	return (_sqrt(n, 1));

}

/**
*_sqrt - square root
*@n:arg
*@m: arg
*Return: square root
*/

int _sqrt(int n, int m)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (m * m > n)
	{
		return (-1);
	}
	else if (m * m == n)
	{
		return (m);
	}
	return (_sqrt(n, m + 1));
}
