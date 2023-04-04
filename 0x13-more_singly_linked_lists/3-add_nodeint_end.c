#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds node at end of the list
 * @head: head of the linked list
 * @n: integer to be added
 * Return: address of the head else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	*head = new_node;
	else
	{
	current_node = *head;
	while (current_node->next != NULL)
	current_node = current_node->next;
	current_node->next = new_node;
	}
	return (*head);
}
