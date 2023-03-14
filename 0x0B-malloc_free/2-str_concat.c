#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings
 *@s1: the first string
 *@s2: the second string
 * Return: a pointer that pointing to the string
 */
char *str_concat(char *s1, char *s2)
{
	int i, r, n, s;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
		i++;

	r = 0;
	while (s2[r] != '\0')
		r++;

	p = (char *) malloc(sizeof(char) * (r + i + 1));

	for (n = 0; s1[n] ; n++)
		p[n] = s1[n];

	for (s = 0; s2[s] ; s++)
		p[n + s] = s2[s];

	if (p == NULL)
		return (NULL);

	return (p);
}
