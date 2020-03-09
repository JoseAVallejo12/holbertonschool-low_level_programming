#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * - inizialice struct data type
 *@d: Pointer to struct
 *@name: name parameter
 *@age: age parameter
 *@owner: owner parameter
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n",d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
