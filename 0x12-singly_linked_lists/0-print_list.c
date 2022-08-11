#include <stdio.h>
#include "lists.h"
/**
*print_list - print the list
*@h: list pointer
*Return: integer
*/

size_t print_list(const list_t *h)
{
	int n_node = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			n_node++;
		}
		else
		{
			printf("[0] (nil)\n");
			n_node++;
		}
		h = h->next;
	}
	return (n_node);
}
