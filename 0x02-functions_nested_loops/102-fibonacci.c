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
		if (b != 20365011074)
		{
			printf("%1d, ", a);
		}
		else
		{
			printf("%1d\n", a);
		}
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
