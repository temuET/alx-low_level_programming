#include <stdio.h>
/**
*main - entery point
*Return: 0
*/
int main(void)
{
	int i;
	unsigned long a, b, c;

	a = 1;
	b = 2;
	for (i = 0; i < 50; ++i)
	{
		c = a + b;
		printf("%lu, ", a);
		a = b;
		b = c;

	}
	printf("\n");

	return (0);
}
