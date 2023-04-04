#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the begining of a list
 * @head: the origial linked list
 * @n: the integer to add to the node
 * Return: address of the new list else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
