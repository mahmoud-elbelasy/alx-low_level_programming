#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 * Return: always (0)
 */
void print_binary(unsigned long int n)
{
	int i, count;
	unsigned long int current;

	count = 0;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
