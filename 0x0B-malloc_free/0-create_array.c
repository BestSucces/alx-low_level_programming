#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of charaters
 * and initializes it with a specific charater
 * @size: function parameter
 * @c: function paramter
 *
 * Return: a pointer to an array if successfull
 * And NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptarray;
	unsigned int count;

	ptarray = malloc(size * sizeof(char));
	if (ptarray == NULL)
		return (NULL);


	for (count = 0; count < size; count++)
	{
		ptarray[count] = c;
	}
	return (ptarray);
}
