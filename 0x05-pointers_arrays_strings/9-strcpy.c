#include "main.h"
/**
 * _strcpy - function copy string to another place
 * @dest: destination array
 * @src: source array
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return(dest);



}
