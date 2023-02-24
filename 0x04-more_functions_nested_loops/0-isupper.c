#include "main.h"

/**
 * _isupper - function that checks for uppercase
 * @c: parameter to be checked
 * Return: always 1 for success
 * and otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
