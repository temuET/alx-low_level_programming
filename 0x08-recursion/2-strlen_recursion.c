#include "main.h"

/**
*_strlen_recursion - find out the length of the string
*@s: arg
*
*Return: string length
*/

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
