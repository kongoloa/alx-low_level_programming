#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches value in a linked list with the Jump search
 * @list: list to search
 * @size: Size of the array
 * @value: Value to search
 * Return: 1st index where value is located or -1 for NULL array
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tail = list;
	size_t jump = sqrt(size);

	if (list && size)
	{
		while (tail->next && value > tail->n)
		{
			list = tail;
			size = jump;
			while (size-- && tail->next)
				tail = tail->next;
			PRINT_CHECKED(tail->index, tail->n);
		}
		PRINT_BOUNDED(list->index, tail->index);
		tail = tail->next;
		while (list != tail)
		{
			PRINT_CHECKED(list->index, list->n);
			if (list->n == value)
				return (list);
			list = list->next;
		}
	}
	return (NULL);
}
