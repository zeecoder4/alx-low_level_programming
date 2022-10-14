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

	printf("Size of integer: %li bytes\n", sizeof(integerSize));
	printf("Size of float: %li bytes\n", sizeof(floatSize));
	printf("Size of double: %li bytes\n", sizeof(doubleSize));
	printf("Size of char: %li bytes\n", sizeof(charSize));

	return(0)
}
