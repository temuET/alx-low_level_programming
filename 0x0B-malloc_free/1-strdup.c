#include "main.h"
#include <stdlib.h>

/**
*_strdup - retun a pointer to a new string
*@str: str arg
*Return: pointer
*/

char *_strdup(char *str)
{
	char *strp;
	int i;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	strp = malloc(i * sizeof(char) + 1);
	if (strp == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < i; count++)
	{
		strp[count] = str[count];
	}
	strp[count] = '\0';

	return (strp);
}
