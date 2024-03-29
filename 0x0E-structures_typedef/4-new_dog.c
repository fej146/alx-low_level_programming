#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *@name: name of new dog
 *@age: age of new doge
 *@owner: owner of new dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name1, owner1, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (name1 = 0; name[name1] != '\0'; name1++)
		;
	name1++;
	dog->name = malloc(name1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (owner1 = 0; owner[owner1] != '\0'; owner1++)
		;
	owner1++;
	dog->owner = malloc(owner1 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner1; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
