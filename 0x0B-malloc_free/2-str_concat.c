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
	int i, j, count, d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	strp = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);

	if (strp == NULL)
	{
		return (NULL);
	}

	for (count = 0, d = 0; count < (i + j + 1); count++)
	{
		if (count < i)
		{
			strp[count] = s1[count];
		}
		else
		{
			strp[count] = s2[d++];
		}
	}
	return (strp);
}
