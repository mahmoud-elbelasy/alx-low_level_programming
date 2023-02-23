#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * main - return is upper
 * @c: is upper
 * Reyurn: Always 0 (success)
 */
int _isupper(int c)
{
	int a;
	
	if (isupper(c))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}

