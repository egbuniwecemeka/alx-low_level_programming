#include <stdio.h>
/**
 * main - Prints all alphabets
 *
 * Return: All (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxzy";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar("\n");
	return (0);
}
