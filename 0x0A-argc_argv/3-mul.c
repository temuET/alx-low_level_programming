#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*@argc: arg count
*@argv: arg vector
*Return: 1 if ther is error 0 if success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);

}
