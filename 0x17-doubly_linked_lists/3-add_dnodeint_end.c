#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *old;
if (head == NULL){
return (NULL);}
new = malloc(sizeof(dlistint_t));
if (new == NULL){
return (NULL);}
new->n = n;
new->next = NULL;
if (*head == NULL){
new->prev = NULL;
*head = new;
return (new);}
old = *head;
for (; old->next != NULL;){
old = old->next;}
old->next = new;
new->prev = old;
return (new);
}