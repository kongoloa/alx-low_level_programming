#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to retrieve
 * Return: address of the node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int a;
if (head == NULL){
return (NULL);}
for (a = 0; head != NULL && a < index; a++){
head = head->next;}
return (head);
