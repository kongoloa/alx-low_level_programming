#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of 'list_t' list
 * @h: pointer to the list_t list to print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int i;
tmp = h;
for (i = 0; tmp; i++)
{
printf("[%u] %s\n", tmp->len, tmp->str);
tmp = tmp->next;
}
return (i);
}
