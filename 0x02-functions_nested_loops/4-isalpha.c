#include "main.h"
/**
 * _isalpha - Checks for alphabets
 * @c: character to check
 * Return: 1 if its an alphabet, either lowere or upper, else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
