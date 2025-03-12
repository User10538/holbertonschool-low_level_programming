#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create new dog.
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if funcation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;
	int i, lenName = 0, lenOwner = 0;
	
	/** Allocate memory for the dog struct*/
	dog = malloc(sizeof(dog_t));
	
	if (dog == NULL)
		return NULL;

	/**Check the name and owner length*/
	for (lenName = 0; name[lenName]; lenName++);

	for (lenOwner = 0; name[lenOwner]; lenOwner++);


	/**allocate memory then free the allocated memory to prevent memory leaks.*/
	
	dog->name = malloc(lenName + 1);
	
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc(lenOwner + 1);
	
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	/**copy name using a for loop*/
	
	for (i = 0; i <= lenName; i++)
		dog->name[i] = name[i];
       
	/** copy owner using a for loop*/
	for (i = 0; i <= lenOwner; i++)
		dog->owner[i] = owner[i];
 		
	/**Assign the age*/
	dog->age = age;
	
	return dog;
}
