#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*sum_listint - print sum of all the data of n in the list
*@head: pointer
*Return: sum of all the data of n
*/

int sum_listint(listint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
