#include "holberton.h"

/**
 * _pow_recursive - raised x to the power of y
 * @x: number to be raised
 * @y: power to raise to
 *
 * Return: Value of x raised to y
 */
int _pow_recursive(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursive(x, y - 1));
	}
	else
	{
		return (1);
	}
}
