#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*pop_listint - delete the first node in the list
*@head: pointer
*Return: the head node data
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;
	if (tmp == NULL)
	{
		return (0);
	}
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
