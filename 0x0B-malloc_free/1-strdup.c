#include "main.h"
/**
 * _strdup - fucntion duplicates string to a new memory allocation
 * @str: string to be duplicated
 *
 * Return: pointer to new memory location
*/
char *_strdup(char *str)
{
	char *ptstring;
	int count;

	/*get lenght of str*/

	int str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	/* determine size and allocate memory space for it */

	ptstring = malloc((str_len * sizeof(char)) + 1);

	/* check if malloc doesn't return null */
	if (ptstring == NULL)
	{
		return (NULL);
	}

	/* copy the str to the bew memory */

	for (count = 0; str[count] != '\0'; count++)
	{
		ptstring[count] = str[count];
	}
	ptstring[count] = '\0';

	return (ptstring);

}


