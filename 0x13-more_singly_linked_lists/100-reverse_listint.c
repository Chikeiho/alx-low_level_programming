#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the f first node in the new list
 */
listint_t *reverseirst node in the list
 *
 * Return: pointer to the_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
