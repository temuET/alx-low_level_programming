#include "main.h"

/**
*reverse_array - reverse array elements
*@a: arg 1
*@n: arg 2
*/

void reverse_array(int *a, int n)
{
	int *ptr;
	int i, j;
	int tmp;

	int a[] = {1, 2, 3, 4, 5, 6};

	ptr = a;

	for (i = 0; i < n; ++i)
	{
		++ptr;
	}
	for (j = 0; j < n / 2; ++j)
	{
		tmp = a[j];
		a[j] = *ptr;
		*prt = tmp;
		ptr--;
	}
}
