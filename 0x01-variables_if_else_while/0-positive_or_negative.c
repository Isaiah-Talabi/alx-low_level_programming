#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Correct)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("0% is positive\n", n);
	}

	else if (n == 0)
	{
		printf("0% is zero\n", n);
	}

	else
	{
		printf("0% is negative\n", n);
	}
	return (0);
}

