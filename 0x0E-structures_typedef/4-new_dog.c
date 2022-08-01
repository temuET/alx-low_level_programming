#include "dog.h"
#include <stdlib.h>

/**
*new_dog - create new dog
*@name: name
*@age: age
*@owner: dog owner
*Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *c_dog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	c_dog = malloc(sizeof(dog_t));
	if (c_dog == NULL)
	{
		free(c_dog);
		return (NULL);
	}
	c_dog->name = malloc(i * sizeof(c_dog->name));
	if (c_dog->name == NULL)
	{
		free(c_dog->name);
		free(c_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		c_dog->name[k] = name[k];
	}
	c_dog->age = age;
	c_dog->owner = malloc(j * sizeof(c_dog->owner));
	if (c_dog->owner == NULL)
	{
		free(c_dog->owner);
		free(c_dog->name);
		free(c_dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
	{
		c_dog->owner[k] = owner[k];
	}
	return (c_dog);
}
