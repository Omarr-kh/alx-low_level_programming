#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a linked list (safe version)
 * @head: head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int size = 0;
	const listint_t *current = head;
	const listint_t *temp = head;

	while (current && current <= temp)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		size++;
		if (size > 1)
			temp = temp->next;
	}
	return (size);
}
