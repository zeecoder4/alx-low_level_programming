#include <stdio.h>
/**
 * main - The program starts here
 *
 * Return: Always (0) success
 */
int main(void)
{
	char lett;

	for(lett = 'z'; lett <= 'a'; lett--)
	{
		putchar(lett);
	}
	putchar('\n');

	return (0);
}
