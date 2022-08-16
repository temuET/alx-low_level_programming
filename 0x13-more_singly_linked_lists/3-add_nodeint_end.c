#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint_end - add node at the end of the node
*@head: pointer
*@n: number
*Return: address of that element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *hhead = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (hhead != NULL)
	{
		while (hhead->next != NULL)
		{
			hhead = hhead->next;
		}
		hhead->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
