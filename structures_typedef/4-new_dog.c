#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - creates a duplicate of a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if failed
 */
char *_strdup(const char *str)
{
int len = 0, i;
char *dup;

if (str == NULL)
return (NULL);

while (str[len])
len++;

dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

if (name == NULL || owner == NULL)
return (NULL);

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

d->name = _strdup(name);
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = _strdup(owner);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

d->age = age;

return (d);
}
