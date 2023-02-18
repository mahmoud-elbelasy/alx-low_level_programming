#include <stdio.h>
/**
 *main -entry point
 *Return: Always o (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
