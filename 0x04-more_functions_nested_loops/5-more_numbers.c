#include "main.h"
/**
 * more_numbers - print range of numbers ten times
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	int num;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)

		if (num > 9)
		
			_putchar((num / 10) + (num % 10));
	

	}

}
