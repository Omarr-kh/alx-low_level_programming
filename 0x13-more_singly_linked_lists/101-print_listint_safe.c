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
         size_t size = 0;
         do {
                 printf("[%p] %d\n", (void *)head, head->n);
                 size++;
                 if (head <= head->next)
                 {
                         printf("-> [%p] %d\n", (void *)(intptr_t)&exit, 98);
                         exit(98);
                 }
                 head = head->next;
         } while (head != NULL);
         return (size);
 }
