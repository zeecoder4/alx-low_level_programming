#include <stdio.h>
/**
 * main - Program starts here 
 *
 * Return: Always (0) success
 */
int main(void)
{
	char letters;

	for(letters = 'a'; letters <= 'z'; letters++)
	{
		if(letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
	}
	putchar('\n');

	return (0);
}
