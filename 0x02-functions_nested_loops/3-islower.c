#include "main.h"
/**
 * _islower - Checks for lowercase
 * @c: The character to be checked
 * Return: Return 1 for lowercases, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
