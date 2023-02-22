#include "main.h"
#include <ctype.h>
/**
 * _islower - function that test the lowercase
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	int n;
	n = 1;

	if (islower(c) == 1)
		n = 1;
	else
		n = 0;
	return (n);
}	


