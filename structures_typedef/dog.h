#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type for dog details
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes a variable of type struct dog
 *              with the given name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

