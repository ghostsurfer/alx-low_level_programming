#include "main.h"

/*
 * _isdigit - checks if a char is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int char c)
{
	int y = 0;
	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
