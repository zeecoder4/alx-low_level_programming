#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

	printf("Size of integer: %i bytes\n", sizeof(int));
	printf("Size of float: %i bytes\n", sizeof(float));
	printf("Size of long int: %i bytes\n", sizeof(long int));
	printf("SIze of long long int: %ibytes\n", sizeof(long long int));
	printf("Size of char: %i bytes\n", sizeof(char));

	return (0);
}
