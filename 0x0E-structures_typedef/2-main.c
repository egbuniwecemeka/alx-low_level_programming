#include <stdio.h>
#include "dog.h"

/**
 * main - checks the code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);

	return (0);
}
