#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a liumber of elements in the list
 */
size_t print_lisstint_t list.
 * @h: list to print
 *
 * Return: ntint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
