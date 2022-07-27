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
	int i = 0, j = 0, len = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	len = i + j;


	strp = (char *)malloc(len * sizeof(char) + 1);

	j = 0;

	while (k < len)
	{
		if (k < i)
			strp[k] = s1[k];
		if (k >= i)
		{
			strp[k] = s2[j];
			j++;
		}
		k++;
	}
	strp[k] = '\0';

	return (strp);
}
