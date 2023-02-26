#include <stdio.h>
/**
 * main - entry point of the function
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
		putchar(n);
	putchar('\n');
	return (0);

}
