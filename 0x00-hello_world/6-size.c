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

	printf("Size of integer: %lu bytes\n", sizeof(integerSize));
	printf("Size of float: %lu bytes\n", sizeof(floatSize));
	printf("Size of double: %lu bytes\n", sizeof(doubleSize));
	printf("Size of char: %lu bytes\n", sizeof(charSize));

	return(0)
}
