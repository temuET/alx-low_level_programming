#include <stdio.h>
#include "lists.h"
/**
*print_listint - print all the elements in the list
*@h: pointer to the list
*Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	size_t nodes = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		nodes += 1;
		head = head->next;
	}
	return (nodes);
}
