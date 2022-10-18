#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * main - The program starts here!
 *
 * return (0) - End of the program
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RANDMAX / 2:
		
		if(n > 0)
		{
			print("%d is positive\n", n);
		}
	 	else if(n == 0)
		{
			print("%d is zero\n", n);
		}
		else if(n  < 0)
		{
			print("%d is negative\n", n);
		}
	return (0);
}

