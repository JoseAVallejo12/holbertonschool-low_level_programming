#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *_strlen - measure legenth of string
 *@s: string to print
 *Return: Always integer
 */

int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 *_strdup - Copie a string pointed
 *@src: Sender
 *Return: A string
 */

char *_strdup(char *src)
{
	char *str;
	char *p;
	int len = 0;

	while (src[len])
		len++;
	str = malloc(len + 1);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}

/**
 *new_dog - create copy struct data
 *@name: char type
 *@age: float type
 *@owner: char type
 *Return: Always success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogs;
	(void) age;

	dogs = malloc(sizeof(struct dog));
	if (dogs == NULL)
	{
		free(dogs);
		return (NULL);
	}

	dogs->name = _strdup(name);
	if (name == NULL)
	{
		free(name);
		free(dogs);
		return (NULL);
	}
	dogs->age = age;
	dogs->owner = _strdup(owner);
	if (owner == NULL)
	{
		free(owner);
		free(name);
		free(dogs);
		return (NULL);
	}

	return (dogs);
}
