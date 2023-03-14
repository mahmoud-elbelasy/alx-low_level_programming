#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that create an array of char
 * @size: the size of the array
 * @c: the initialize of he array
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(sizeof(c) * size);
	unsigned int i;

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	else
		for (i = 0; i < size; i++)
			p[i] = c;

	return (p);

}
