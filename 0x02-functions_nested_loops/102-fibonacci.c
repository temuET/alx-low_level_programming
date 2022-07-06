#include <stdio.h>
/**
*main - entery point
*Return: 0
*/
int main(void)
{
	int a, b, c, i;

	a = 1;
	b = 2;
	for (i = 0; i < 50; i++)
	{
		printf("%1d, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
