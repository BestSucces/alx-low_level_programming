#include "main.h"
/**
 * _strlen - funtion prints the lenght of a string
 * @s: function parameter
 * Return: always 0
 */
int _strlen(char *s)
{
	int a = 0; /* start counting from zero*/

	for (; *s++;)
		a++;
	return (a);
}
