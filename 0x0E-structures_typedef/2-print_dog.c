#include "dog.h"
#include <stdio.h>

/**
 *print_dog - print struct data type
 *@d: Pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name != 0)
		printf("Name: %s\n", d->name);
	else
		printf("Name:(nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner != 0)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner:(nil)\n");

}

