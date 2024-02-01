#include "dog.h"
struct dog;
/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d = {"Poppy", 3.5, "Bob"};
}
