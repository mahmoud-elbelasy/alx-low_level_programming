#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * @str: the string
 *Return: a pointer
 */
char *_strdup(char *str)
{
	long unsigned int i;
	char *p = (char *) malloc(sizeof(str));

	if (str == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < sizeof(str) ; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}
