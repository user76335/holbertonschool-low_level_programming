#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t
 * @d: pointer to the dog_t to be freed
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
