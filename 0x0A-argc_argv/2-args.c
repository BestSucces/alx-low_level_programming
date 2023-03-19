#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: function paramter that prints number of command line argument passed
 * @argv: function paramter that print actual arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}

