#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{

	char *name;
	float age;
	char *owner;

};

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner);/**task 1*/

#endif /* DOG_H */
