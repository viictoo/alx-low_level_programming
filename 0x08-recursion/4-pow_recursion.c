#include "main.h"

/**
  * _pow_recursion-A function that returns the value of x raised to power y
  * @x: root
  * @y: power value
  * Return: Integer value of x power y
  */

int _pow_recursion(int x, int y)
{
	/* case y is -ve*/
	if (y < 0)
		return (-1);
	/* base case: y is 0, so x^y is 1*/
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
