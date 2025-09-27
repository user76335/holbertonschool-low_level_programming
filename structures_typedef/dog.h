#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

