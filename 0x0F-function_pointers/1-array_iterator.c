#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a param on each element of array
 * @array: array of integers
 * @size: size of array
 * @action: pointer to the func to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
