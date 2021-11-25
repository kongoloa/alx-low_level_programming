#include "lists.h"

/**
 * sum_dlistint - sums all of the data of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
int total;
for (total = 0; head != NULL; head = head->next)
{
total = total + head->n;
}
return (total);
}
