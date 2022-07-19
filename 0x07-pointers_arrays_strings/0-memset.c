#include "main.h"

/**
**_memset - a function fills memory with constant byte
*@s: string param
*@b: arg
*@n: integer param
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		num[s] = b;
	}
	return (s);
}
