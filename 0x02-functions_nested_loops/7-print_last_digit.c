#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: the number
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int r;

	r = _putchar(n % 10 + '0');

	return (r);
}
