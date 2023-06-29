0x06. C - More pointers, arrays and strings

Tasks
0. strcat
mandatory
Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest
FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

//SOLUTION
char *_strcat(char *dest, *scr)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	
	return (dest);

}

This _strcat function concatenates two strings together: dest and scr. It takes two parameters: dest (the destination string) and scr (the source string). It returns a pointer to the resulting string dest.

Here's a step-by-step breakdown of the implementation:

i and j are declared as integer variables to keep track of the indices of dest and scr, respectively.

The while loop is used to find the end of the dest string. It iterates through the characters of dest until it reaches the null byte ('\0') indicating the end of the string. The variable i is incremented with each iteration, allowing it to track the length of the dest string.

After finding the end of the dest string, j is set to 0 to initialize it for iterating through the characters of the scr string.

Another while loop is used to copy the characters from the scr string to the end of the dest string. It continues until it reaches the null byte ('\0') in the scr string, indicating the end of the string.

Inside the loop, the current character from scr[j] is assigned to dest[i]. Then, both i and j are incremented to move to the next characters in dest and scr, respectively.

After the loop, the null byte ('\0') is added at the end of the concatenated string in dest to properly terminate it.

Finally, the function returns a pointer to the resulting string dest.

Overall, this implementation iterates through both dest and scr strings, finding the end of dest, copying the characters from scr to dest, and properly terminating the concatenated string.


2. strncpy
mandatory
Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy
FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.

//SOLUTION

Similar to the example above except n indicates where function concates to. Therefore scr while loop will be

j = 0;
while (j < n && scr[j] != 0)
{
	dest[i] = scr[j];
	i++;
	j++
}
