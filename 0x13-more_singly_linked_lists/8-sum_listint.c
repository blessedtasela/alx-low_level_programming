#include "lists.h"

/**
 * sum_listint - returns the sum of elements in linked lists
 * @head: head pointer to first node
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum = sum + temp->n;
	temp = temp->next;
	}

	return (sum);
}
