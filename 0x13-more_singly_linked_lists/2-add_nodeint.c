#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_nodeint - add a new node at the begining
*@head: pointer
*@n: a number
*Return: address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		new_node->next = *head;
	}
	*head = new_node;
	return (new_node);
}
