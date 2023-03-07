#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;


	while (*needle)
	{
		for (i = 0; haystack[i] ; i++)
		{
			if (haystack[i] == *needle)
				return (&haystack[i]);
		}
		needle++;
	}
	return ('\0');
}
