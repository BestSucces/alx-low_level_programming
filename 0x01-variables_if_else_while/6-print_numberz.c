#include <stdio.h>
/**
 * main - entry point of the function
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);

}

