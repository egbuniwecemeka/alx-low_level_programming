#include "main.h"
/**
 * _islower - Checks for letter, lowercase and uppercase
 * @c - character to be checked
 * Return: Returns 1 if c is lower case or 0, else 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
