#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: A pointer to a character (string) representing the dog's name
 * @age: A float representing the dog's age
 * @owner: A pointer to a character (string) representing the dog's owner
 *
 * Description: A structure that stores a dog's name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};

#endif /* DOG_H */

