#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - the function frees a linked list
 * @head: a pinter to the head pointer of a linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
		return;
	while (*head)
	{
		current = current->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
