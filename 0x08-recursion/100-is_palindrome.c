#include "main.h"
#include <string.h>

/**
  * strinder-A function that compares two string elements from opposite ends
  * @last: last string element
  *@s: test string
  * @first: first string value
  * Return: 1 if last = first otherwise 0
  */

int strinder(char *s, int first, int last)
{
	if (first >= last)
		return (1);
	else if (s[first] != s[last])
		return (0);
	return (strinder(s, first + 1, last - 1));
}

/**
  * is_palindrome-A function that checks if string is same in reverse
  * @s: test string parameter
  * Return: 1 if palindrome otherwise 0
  */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (strinder(s, len - 1));
}
