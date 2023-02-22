#include "main.h"
/**
 * _islower - print lowercase alphabets
 *
 * @c: parameter to be printed
 * Return: 1 if it is lowercase
 * and otherwise 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
