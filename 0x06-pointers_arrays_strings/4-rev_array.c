#include "main.h"
/**
 * reverse_array - reverses content of an array of integers
 * @a: function parameter array
 * @n:function parameter number of element of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
