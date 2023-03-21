#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * more headers goes there
 * Description: output the function
 * betty style doc for function main goes there
 * Return: 0 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* Description: output the funtion */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
