#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of a `listint_t` list
 * @head: double pointer to head node
 * @n: int to add to the list
 * Return: Address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
