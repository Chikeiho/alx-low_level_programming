#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a list.
 * @head: Address of the first node in a list.
 * @index: Position of a the node to find (starting fr		return (NULL);
	for (y = 0; y < index; y++)
	{
	om 0).
 * Return: Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
	head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
