#include "main.h"
/**
 * swap_int - function swaps two integers of value
 * @a: function paramter
 * @b: function paramter
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
