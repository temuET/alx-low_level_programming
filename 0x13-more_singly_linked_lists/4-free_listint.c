#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*free_listint - free up memory
*@head: pointer
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
