#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address nt(listint_t *head)
{
	listint_t *tp, *tp2;

	tp =of the first node of a list.
 **/

void free_listi head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
