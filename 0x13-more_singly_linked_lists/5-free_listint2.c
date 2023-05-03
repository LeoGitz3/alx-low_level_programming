#include "lists.h"

/**
 * free_listint2 - Frees Linked List.
 * @head: Pointer to listint_t list to free.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
