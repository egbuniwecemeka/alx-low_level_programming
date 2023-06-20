#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabets.
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)

		_putchar(letters);

	_putchar('\n');
}
