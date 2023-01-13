#include "lists.h"

/**
* insert_dnodeint_at_index - Insert a new_node at a given position
* @head: Head of the list
* @idx: Position for the inswertion of the new_node
* @n: Value of the node
*
* Description: Insert n into a dlistimt_t linked list
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *actual;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	
	actual = *h;
	for (i = 0; actual && i < idx; i++)
		actual = actual->next;

	if (!actual && i == idx)
		return (add_dnodeint_end(h, n));
	else if (actual)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		actual->prev->next = new;
		new->prev = actual->prev;
		actual->prev = new;
		new->next = actual;
		return (new);
	}
	return (NULL);
}
