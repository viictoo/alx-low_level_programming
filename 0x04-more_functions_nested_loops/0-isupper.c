#include "main.h"

/**
  * _isupper- A function that checks for uppercase xter
  *
  *@c: test parameter
  *
  * Return: 1 (if uppercase) 0(otherwise)
  */

int _isupper(int c)
{
	if (c > 40 && c < 91)
		return (1);
	else
		return (0);
}
