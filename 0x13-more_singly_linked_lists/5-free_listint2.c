#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*free_listint2 - free up memory
*@head: pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
