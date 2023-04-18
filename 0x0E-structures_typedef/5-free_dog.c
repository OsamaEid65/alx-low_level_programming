 if (name == NULL || owner == NULL)
       return (NULL);
   dog = malloc(sizeof(dog_t));
   if (dog == NULL)
       return (NULL);
   for (nl = 0; name[nl]; nl++)
       ;
   nl++;
   dog->name = malloc(nl * sizeof(char));
   if (dog->name == NULL)
   {
       free(dog);
       return (NULL);
   }
   for (i = 0; i < nl; i++)
       dog->name[i] = name[i];
   dog->age = age;
   for (ol = 0; owner[ol]; ol++)
       ;
   ol++;
   dog->owner = malloc(ol * sizeof(char));
   if (dog->owner == NULL)
   {
       free(dog->name);
       free(dog);
       return (NULL);
   }
   for (i = 0; i < ol; i++)
       dog->owner[i] = owner[i];
   return (dog);
}


=>5-free_dog.c


#include <stdlib.h>
#include "dog.h"


/**
* free_dog - frees dogs
* @d: pointer to dog to free
*
* Return: void
*/
void free_dog(dog_t *d)
{
   if (d)
   {
       free(d->name);
       free(d->owner);
       free(d);
   }
}
