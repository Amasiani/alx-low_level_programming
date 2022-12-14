#include "lists.h"

/**
* free_listint_safe - Frees a linked list
* @h: pointer to the first node in the linked list
*
* Return: number of elements in the freed list
*/

size_t free_listint_safe(listint_t **h)
{
	int i, flag;
	listint_t *temp;

	for (i = flag = 0; *h != NULL || flag; i++)
	{
		if (*h <= (*h)->next)
		{
			flag = 1;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
		flag = 0;
	}
	if (flag)
	{
		temp = (*h)->next;
		free(*h);
		i++;
	}

	*h = NULL;

	return (i);
}
