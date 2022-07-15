#include "main.h"
#include <string.h>

/**
* *_strncat - used to concatenet two strings like s1 and s2
* @dest: first arg
* @src: second arg
* @n: will use most n bytes
* Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(*dest, *src, n);
	return (dest);
}
