#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t linked list
* @head: Head of the list
* @n: value of the new node
*
* Description: Adds a new node to a dlistint_t linked list
* Return: Pointer to the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *current = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (head == NULL)
		return (NULL);

	new_node->n = n;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
		return (new_node);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
