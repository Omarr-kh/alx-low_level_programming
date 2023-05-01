#include "lists.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a linked list (safe version)
 * @head: head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int size = 0;
	const listint_t *current = head;
	const listint_t *next_node = NULL;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		size++;

		next_node = current->next;

		if (next_node != NULL && current <= next_node)
		{
			printf("-> [%p] %d\n", (void *)(intptr_t)&exit, 98);
			exit(98);
		}
		current = next_node;
	}
	return (size);
}
