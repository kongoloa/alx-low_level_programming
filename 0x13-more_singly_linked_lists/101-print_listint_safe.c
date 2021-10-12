#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - print a `listint_t` linked list including mem addresses
 * @head: list of type listint_t to print
 * Description: Go through the list only once.
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count;
const listint_t *hold;
current = head;
if (current == NULL)
exit(98);
count = 0;
while (current != NULL)
{
hold = current;
current = current->next;
count++;
printf("[%p] %d\n", (void *)hold, hold->n);
if (hold < current)
{
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}
}
return (count);
}
