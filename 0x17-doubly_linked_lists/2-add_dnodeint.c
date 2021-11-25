#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of linked list
 * @head: double pointer to the head of the list
 * @n:value to addd to new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
if (!head){
return (NULL);}
new = malloc(sizeof(dlistint_t));
if (!new){
return (NULL);}
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head){
(*head)->prev = new;}
*head = new;
return (new);
}
