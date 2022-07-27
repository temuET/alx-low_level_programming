#include "main.h"
#include <stdlib.h>

/**
*str_concat - concatinate two strings
*@s1: arg1
*@s2: arg2
*Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *strp;
	int i, j, a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		;
	}

	strp = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));

	if (strp == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		strp[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		strp[i] = s2[j];
		i++;
	}
	strp[i] = '\0';

	return (strp);
}
