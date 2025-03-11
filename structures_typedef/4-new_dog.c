#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;
	
	/** Allocate memory for the dog struct*/
	dog = malloc(sizeof(dog_t));
	
	if (dog == NULL)
		return NULL;

	/** Allocate memory for the name and owner strings to store*/
	dog->name = malloc(strdup(name) + 1);
	dog->owner = malloc(strdup(owner) + 1);
       
	/**Assign the age*/
	dog->age = age;
	
	return dog;
}
