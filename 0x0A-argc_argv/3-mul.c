#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: function paramter that prints number of paramters passed
 * @argv: function paramter that prints actual paramter passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int index1;
	int index2;
	int mul;

	index1 = atoi(argv[1]);
	index2 = atoi(argv[2]);

	if (argc == 3)
	{
		mul = index1 * index2;
		printf("%d\n", mul);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
