#include <stdio.h>
/**
 * main - The program starts here!
 *
 * Return: Always (0) success
 */
int main(void)
{
	char lett;

	for(lett = 0; lett <= 9; lett++)
	{
		putchar(lett);
	}
	for(lett = 'a'; lett <= 'f'; lett++)
	{
		putchar(lett);
	}
	putchar('\n');

	return (0);
}
