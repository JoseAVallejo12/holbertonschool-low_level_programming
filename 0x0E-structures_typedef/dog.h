#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dog propiedades
 *@name: First member
 *@age: Second member
 *@owner: dueno
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

