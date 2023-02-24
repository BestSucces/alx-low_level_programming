#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 * @c: parameter to be checked
 *
 * Return: returns 1 if success
 * and otherwise 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	if  (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{	return (0);
	}
	return (0);	

}

