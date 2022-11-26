#include<stdio.h>

/**
 * main - Program starts here
 *
 * Return: ALways (0) Success
 */
int main(void)
{
	char letters;
	char LETTERS;


	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (LETTERS = 'A'; LETTERS <= 'Z'; LETTERS++)
	{
		putchar(LETTERS);
	}
	putchar('\n');


	return (0);
}
