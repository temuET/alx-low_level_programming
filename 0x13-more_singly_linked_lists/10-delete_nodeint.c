#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*delete_nodeint_at_index - delete the node at index
*@head: pointer
*@index: index
*Return: 1 if succede -1 if faild
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cp = *head;
	unsigned int node;

	if (cp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (cp->next == NULL)
		{
			return (-1);
		}
		cp = cp->next;
	}
	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);
	return (1);
}
