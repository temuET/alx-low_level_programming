#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*listint_len - print number of elements
*@h: pointer
*Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *head = h;
	size_t nodes = 0;

	while (head != NULL)
	{
		nodes += 1;
		head = head->next;
	}
	return (nodes);
}
