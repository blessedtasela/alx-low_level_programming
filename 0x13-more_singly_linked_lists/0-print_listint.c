#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements in a linked list
 * @h: the list_t list pointer to the head
 * Return: number of nodes in h
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	printf("%d\n", h->n);

	h = h->next;
	}
	return (nodes);
}
