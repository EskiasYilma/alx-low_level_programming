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
	struct dog *snoop;
	char *nm, *ow;

	lname = 0;
	lowner = 0;

	while (name[lname])
		lname++;
	while (owner[lowner])
		lowner++;
	snoop = malloc(sizeof(dog_t));
	if (snoop == NULL)
		return (NULL);
	(*nm).name = malloc((lname + 1) * sizeof(char));
	if (nm == NULL)
	{
		free(nm);
		free(snoop);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
		(*nm).name[i] = name[i];
	(*ow).owner = malloc((lowner + 1) * sizeof(char));
	if (ow == NULL)
	{
		free(ow);
		free(snoop);
		return (NULL);
	}
	for (i = 0; i < lowner; i++)
		(*ow).owner[i] = owner[i];
	(*snoop).name = nm;
	(*snoop).age = age;
	(*snoop).owner = ow;
	return (snoop);

}

