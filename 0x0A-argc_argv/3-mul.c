#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @args : nums of argument
 * @argv : the argument
 * Return: Always 0
 */
int main(int args, char *argv[])
{
	int i, mul;

	if (args > 2)
	{
		for (i = 1; i < args; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
