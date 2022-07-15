#include "main.h"
#include <string.h>

/**
* *_strncpy - copy strings
* @dest: first arg
* @src: second arg
* @n: third arg
* Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
