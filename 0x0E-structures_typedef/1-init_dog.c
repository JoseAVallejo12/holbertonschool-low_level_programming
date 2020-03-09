#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - inizialice struct data type
 *@d: Pointer to struct
 *@name: name parameter
 *@age: age parameter
 *@owner: owner parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

