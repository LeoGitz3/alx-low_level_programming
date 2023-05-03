#include "lists.h"

/**
 * add_nodeint - Adds new node at beginning of Linked List.
 * @head: Pointer to the first node in List.
 * @n: Data to insert in new node.
 *
 * Return: Pointer to new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
