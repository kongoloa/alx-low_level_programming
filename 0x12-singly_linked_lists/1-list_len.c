#include <stdlib.h>
#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start of the list
 *
 * Return: number of elements in  gthe linked list
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
