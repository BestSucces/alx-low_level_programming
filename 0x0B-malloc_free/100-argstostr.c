#include "main.h"

/**
 * argstostr - concatenates all the arguments of the  program.
 * @ac: function parameter - argument count
 * @av: function parameter -argument vector pointer to character
 * Return: NULL if ac == 0 or av == NULL
 * And a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */
char *argstostr(int ac, char **av)
{
	char *ptstring;
	int count; /* count will be the total total number of strings in all */
	int i; /* i is to count the number of rows*/
	int j; /* j is to count the number of columns of the string*/
	int k;

	/* get the length of each string */
	for (i = 0, count = 0; i < ac; i++)
	{
	/* each row becomes av[i] */
	for (j = 0; av[i][j] != '\0'; j++, count++)
	{
		count++;

	}
	}count++;
	/* allocate enough space for all the string */
	ptstring = malloc(count * sizeof(char));
	if (ptstring == NULL)
		return (NULL);

	/*concatenates all the stings */
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptstring[k] = av[i][j];
			k++;
		}
		/* add new line charater before pointing to the string */
		ptstring[k] = '\n';
		k++;
	}
	ptstring[k] = '\0';

	return (ptstring);

}
