/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 * Return: 1 for uppercase, zero for others
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
