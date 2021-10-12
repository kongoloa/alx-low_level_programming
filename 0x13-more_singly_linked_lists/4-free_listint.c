#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a `listint_t` list
 * @head: pointer to the beginning of the list
 */
void free_listint(listint_t *head)
{
listint_t *hold;
while (head != NULL)
{
hold = head;
head = head->next;
free(hold);
}
}
