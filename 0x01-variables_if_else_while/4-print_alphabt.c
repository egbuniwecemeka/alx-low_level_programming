#include <stdio.h>
/**
 * main - Prints the alphabets without q & e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 127)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
