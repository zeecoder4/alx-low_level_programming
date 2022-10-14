#include<stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integerSize;
	float floatSize;
	double doubleSize;
	char charSize;

	printf("Size of integer: %i bytes\n", sizeof(integerSize));
	printf("Size of float: %i bytes\n", sizeof(floatSize));
	printf("Size of double: %i bytes\n", sizeof(doubleSize));
	printf("Size of char: %i bytes\n", sizeof(charSize));

	return(0)
}
