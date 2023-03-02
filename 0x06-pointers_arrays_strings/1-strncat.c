#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: function parameter destination
 * @src: function parameter source
 * @n: number of characters to be appended
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen;
	int srclen;

	destlen = 0;
	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	srclen = 0;
	while (srclen < n && src[srclen] != '\0')
	{
		dest[destlen] = src[srclen];
		destlen++;
		srclen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
