#include <stdio.h>
/**
 *main - rntry point
 * Return: Always 0
 */
int main(void)
{
	int i, z;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			z = z + i;
		i++;
	}
	printf("%d", z)
	return (0);
}
