#include "lists.h"

/**
* sum_dlistint - Sum of all the data (n) of a dlistint_t linked list
* @head: Head of the list
*
* Description: sum the data of a dlistint_t linked list
* Return: Sum of all nodes values
*/

int sum_dlistint(dlistint_t *head)
{
	int result;

	for (result = 0; head != NULL; head = head->next)
		result += head->n;
	return (result);
}
