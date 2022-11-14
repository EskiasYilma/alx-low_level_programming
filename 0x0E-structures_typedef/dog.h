#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: Dog's name
 * @age: Dog's Age
 * @owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
