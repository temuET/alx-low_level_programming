#include <stddef.h>
#include "function_pointers.h"

/**
*array_iterator - iterat array
*@array: array pointer to int
*@size: size
*@action: pointer to a function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iter;

	if (array && action)
	{
		for (iter = 0; iter < size; iter++)
		{
			action(array[iter]);
		}
	}
}
