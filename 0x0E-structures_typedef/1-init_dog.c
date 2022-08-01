#include "dog.h"
#include <stdlib.h>

/**
*init_dog - initialize all variables
*@d: struct dog
*@name: dog name
*@age: age
*@owner: owner
*
*Description: some description
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
