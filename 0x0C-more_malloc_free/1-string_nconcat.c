#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of the chars
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s, r, k;
	char *p;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";
	i = 0;
	r = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[r] != '\0')
		r++;
	if (n < r)
		p = (char *) malloc(sizeof(char) * (i + n + 1));
	else
		p = (char *) malloc(sizeof(char) * (i + r + 1));

	if (p == NULL)
		return (NULL);

	for (s = 0; s1[s] ; s++)
		p[s] = s1[s];

	for (k = 0; k < n; k++)
		p[s + k] = s2[k];
	return (p);
}
