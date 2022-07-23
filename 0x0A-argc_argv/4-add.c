#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main - entry point
*@argc: arg count
*@argv: arg vector
*Return: 1 or 0
*/

int main(int argc, char *argv[])
{
	int i;
	char *ptr;


	int result = 0;

	for (i = 1; i < argc; i++)
	{
		int num = strtol(argv[i], &ptr, 10);

		if (*ptr == '\0')
		{
			result += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
