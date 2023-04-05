#include "lists.h"

/**
 * pop_listint - delete the head node of linked list
 * @head: pointer to head of linked list
 * Return: the content of element deleted other 0 if list is empty
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
