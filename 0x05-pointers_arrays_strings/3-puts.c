#include "main.h"
/**
 * _puts - function prints a string to the standard output
 * @str: function paramter
 * Return: the lenght of the string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');

}
