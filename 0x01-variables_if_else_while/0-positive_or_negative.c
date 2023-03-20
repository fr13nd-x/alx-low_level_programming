#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** main - assigns random function to int n
 * 
 * 
 * Return: 0 always (success) 
 */

int main(void)
{
	int n;	

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number is positive");
	}
	else if(n == 0)
	{
		printf("The number is 0");
	}
	else if(n < 0)
	{
		printf("The number is negative");
	}	

	return (0);
}
