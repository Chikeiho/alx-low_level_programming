#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the be	listint_t *first;
	int n;

	if (head == NULL || *ginning of the list
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
