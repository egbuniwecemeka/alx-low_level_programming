#ifndef DOG_H
#define DOG_H

/**
 * struct dog - My dog's basic info
 * @name: Input value
 * @age: Input value
 * @owner: Input value
 *
 * Description: Longer description
 */

struct dog
{
	/*dog properties*/
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
