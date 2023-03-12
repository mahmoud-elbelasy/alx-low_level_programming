#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @args: the nums of argument
 * @argv: array of arrgument
 * Return: Always 0
 */
int main(int args, char *argv[])
{
	int i;

	for (i = 0; i < args; i++)
		printf("%s\n", argv[i]);

	return (0);
}
