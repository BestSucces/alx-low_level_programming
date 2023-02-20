#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program is to print the size of data type
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("size of char: %ld byte(s)\n", sizeof(char));
	printf("size of int: %ld byte(s)\n", sizeof(int));
	printf("size of long int: %ld byte(s)\n", sizeof(long int));
	printf("size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of float: %ld byte(s)\n", sizeof(float));
	return (0);



}
