#include "lists.h"

/**
 * reverse_listint - Reverses Linked List.
 * @head: Pointer to first node in List.
 *
 * Return: Pointer to First node in new List.
 */
listint_t *reverse_listint(listint_t **head)
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
