#include <stdio.h>
#include <timer.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success/completed)
 */

int main(void)

{

	int n = 1;
	int i1;
	int i2;

	for (i1 = 0; i1 <= 9; i1++)
	{
		for (i2 = n; i2 <= 9; i++)
		{
			putchar(i1 + '0');
			putchar(i2 + '0');


			if (i1 ==9 && i2 == 9)
			continue;
			else if (i1 == 8 && i2 == 9)
				continue;
			putchar(',');
			putchar (' ');

		}
		n++
	}

	putchar('\n');

	return (0);

}
