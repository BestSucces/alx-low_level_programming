#include <stdio.h>
/**
 * main - entry point of the function
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char n, m;

	for (n = 'a' ; n <= 'z' ; n++)
		putchar(n);
	for (m = 'A' ; m <= 'Z' ; m++)
		putchar(m);
	putchar('\n');
	return (0);

}
