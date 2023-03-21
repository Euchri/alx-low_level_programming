#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    float age;
    char* owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return NULL;
	}

	dog->name = malloc(strlen(name) + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return NULL;
	}

	strcpy(dog->name, name);
	dog->age = age;

	dog->owner = malloc(strlen(owner) + 1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return NULL;
	}
	strcpy(dog->owner, owner);
	return dog;
}
