#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: digit to return
 * Return:  1 if num is from 0 to 9. Otherwise, return 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
