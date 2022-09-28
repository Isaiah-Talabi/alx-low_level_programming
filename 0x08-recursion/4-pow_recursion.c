#include "main"
/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: pow recusion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /*Bas condition*/
	{
		return (-1);
	}

	else if (y != 0)
		return (x * _pow_recursion(x, y - 1)); /*Recursive call*/

	else
		return (1);
}
