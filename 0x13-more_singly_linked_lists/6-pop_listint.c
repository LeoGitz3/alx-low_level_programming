#include "lists.h"

/**
 * pop_listint - Deletes head node of Linked List.
 * @head: Pointer to first element in Linked List.
 *
 * Return: Data inside the elements was deleted,
 * or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
