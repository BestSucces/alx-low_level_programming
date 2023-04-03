#include "main.h"
#include <stdlib.h>
/**
 * str_concat - funtion concatenates strings
 * @s1: function paramteer
 * @s2: function paraemter
 *
 * Return: pointer to NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptstring;
	int str_len1;
	int str_len2;
	int sum;
	int i, j;

	str_len1 = 0;
	while (s1[str_len1] != '\0')
	{
		str_len1++;
	}
	str_len2 = 0;
	while (s2[str_len2] != '\0')
	{
		str_len2++;
	}
	sum = str_len1 + str_len2;

	ptstring = malloc(sum * sizeof(char) + 1);

	if (ptstring == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		/*if (s1[i] == '\0')*/
			/*return (" ");*/
	ptstring[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		ptstring[i+j] = s2[j];

	return (ptstring);
}


