#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

	printf("Size of integer: %i byte(s)\n", sizeof(int));
	printf("Size of float: %i byte(s)\n", sizeof(float));
	printf("Size of long int: %i byte(s)\n", sizeof(long int));
	printf("SIze of long long int: %ibyte(s)\n", sizeof(long long int));
	printf("Size of char: %i byte(s)\n", sizeof(char));

	return (0);
}
