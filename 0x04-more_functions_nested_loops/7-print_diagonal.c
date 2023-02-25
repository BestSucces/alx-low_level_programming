#include "main.h"
/**
 * print_diagonal -function draw a diaginal line using characters
 *
 *@n: functions paramter
 *
 *Return: always 0
 */
void print_diagonal(int n)
{
	int line;
	int gap;

	if (n > 0)
	{
	for (line = 0; line < n ; line++)
	{
	for (gap = 0 ; gap < line ; gap++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	if (line == n - 1)
	{
		continue;
	}
		_putchar('\n');
	}
	}
	_putchar('\n');


}
