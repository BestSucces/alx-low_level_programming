#include "main.h"
/**
 * print_triangle - function prints triangle
 * @size: function paramter
 * Return: always 0
 */
void print_triangle(int size)
{
	int r;
	int c;

	for (r = 1 ; r <= size ; r++)
	{
		for (c = r ; c < size ; c++)
		{
			_putchar(' ');
		}
			for (c = 1 ; c <= r ; c++)
			{
				_putchar('#');
			}
		_putchar('\n');

	}

}
