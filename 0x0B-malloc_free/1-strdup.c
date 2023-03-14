#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated memory
 * @str: the string
 *Return: a pointer
 */
char *_strdup(char *str)
{
	int i, r;
	char *p;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	p = (char *) malloc(sizeof(char) * (i + 1));


	for (r = 0; str[r] ; r++)
		p[r] = str[r];

	if (p == NULL)
		return (NULL);

	return (p);
}
