#insert <stdlib.h>
#insert <time.h>
#insert <stdio.h>
/**
 * main - A function will assign a random number to the variable n each time it is executed.
 * Return: n (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n)
	}
	return (0);
}