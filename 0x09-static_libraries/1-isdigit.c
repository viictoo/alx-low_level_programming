#include "main.h"

/**
  * _isdigit- A function that checks for a digit
  *
  * @c: test digit
  * Return: 1 (if is a digit) 0(otherwise)
  */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
