#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in linked list
 * @head: pointer to first node in linked list
 * @idx: index where the new node is to be added
 * @n: data to insert in the new node
 * Return: pointer to the new node otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
	return (NULL);

	new->n = n;
	new->next = NULL;

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
	if (idx - 1)
	{
	new->next = temp->next;
	temp->next = new;
	return (new);
	}
	else
	temp = temp->next;
	}

	return (NULL);
	}
