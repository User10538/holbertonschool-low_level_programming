#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog_t, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	
	int i, lenName = 0, lenOwner = 0;
	
	if (name == NULL || owner == NULL)
		return (NULL);
	
	/* Get length of name and owner */
	while (name[lenName])
		lenName++;
	
	while (owner[lenOwner])
		lenOwner++;
    
	/* Allocate memory for struct */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	
	/* Allocate memory for name */
	dog->name = malloc(lenName + 1);
	
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	
	/* Allocate memory for owner */
	dog->owner = malloc(lenOwner + 1);
	
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		
		return (NULL);
	}
	
	/* Copy name using a loop */
       for (i = 0; i <= lenName; i++)
	       dog->name[i] = name[i];
       
       /* Copy owner using a loop */
       for (i = 0; i <= lenOwner; i++)
	       dog->owner[i] = owner[i];
       
       /* Assign age */
       dog->age = age;
       
       return (dog);
}
