#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @array: the integer to print
 * @size: size of array
 * @action: pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
