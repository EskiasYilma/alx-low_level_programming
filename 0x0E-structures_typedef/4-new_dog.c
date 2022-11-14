#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Nothing
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	int lname, lowner, i;
	dog_t *snoop;

	lname = 0;
	lowner = 0;

	while (name[lname])
		lname++;
	while (owner[lowner])
		lowner++;
	snoop = malloc(sizeof(dog_t));
	if (snoop == NULL)
		return (NULL);
	(*snoop).name = malloc(lname * sizeof((*snoop).name));
	if (snoop == NULL)
		return (NULL);
	for (i = 0; i < lname; i++)
		(*snoop).name[i] = name[i];
	(*snoop).owner = malloc(lowner * sizeof((*snoop).owner));
	if (snoop == NULL)
		return (NULL);
	for (i = 0; i < lowner; i++)
		(*snoop).owner[i] = owner[i];
	(*snoop).age = age;
	if (snoop == NULL)
		return (NULL);
	return (snoop);

}

