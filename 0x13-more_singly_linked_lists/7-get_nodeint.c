#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*get_nodeint_at_index - get the node at the index
*@head: pointer
*@index: index of the node
*Return: the nth node in the list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
	{
		head = head->next;
	}
	if (n < index)
	{
		return (NULL);
	}
	return (head);
}
