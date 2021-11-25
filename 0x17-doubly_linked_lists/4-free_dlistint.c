#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *freed;
for (; head != NULL;)
{
freed = head->next;
free(head);
head = freed;
}
}
