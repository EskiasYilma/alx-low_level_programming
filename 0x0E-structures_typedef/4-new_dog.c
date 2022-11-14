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
	snoop = malloc(sizeof(struct dog));
	if (snoop == NULL)
		return (NULL);
	nm = malloc((lname + 1) * sizeof(char));
	if (nm == NULL)
	{
		free(nm);
		free(snoop);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
		nm[i] = name[i];
	ow = malloc((lowner + 1) * sizeof(char));
	if (ow == NULL)
	{
		free(ow);
		free(snoop);
		return (NULL);
	}
	for (i = 0; i < lowner; i++)
		ow[i] = owner[i];
	(*snoop).name = nm;
	(*snoop).age = age;
	(*snoop).owner = ow;
	return (snoop);

}

