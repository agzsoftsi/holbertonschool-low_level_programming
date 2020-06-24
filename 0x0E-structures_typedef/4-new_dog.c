#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates a new dog.
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int namel, ownerl, i;

	for (namel = 0; name[namel] != '\0'; namel++)
		;

	for (ownerl = 0; owner[ownerl] != '\0'; ownerl++)
		;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (namel + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * (ownerl + 1));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}

	for (i = 0; i <= namel; i++)
		ndog->name[i] = name[i];

	ndog->age = age;

	for (i = 0; i <= ownerl; i++)
		ndog->owner[i] = owner[i];

	return (ndog);
}
