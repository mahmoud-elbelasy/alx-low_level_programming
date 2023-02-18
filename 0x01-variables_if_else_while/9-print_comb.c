#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num % 10 + '0');
		if (num < 9)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
