#include <stdio.h>
#include "lists.h"
/**
*list_len - print number of elements
*@h: pointer
*Return: node
*/

size_t list_len(const list_t *h)
{
	int n_node = 0;


	while (h != NULL)
	{
		n_node++;
		h = h->next;
	}
	return (n_node);
}
