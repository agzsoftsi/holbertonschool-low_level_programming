#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates a new dog.
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *nname, *nowner;
dog_t *ndog;

if (name == NULL || owner == NULL)
return (NULL);

ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);

nname = malloc(sizeof(char) * _strl(name) + 1);
if (nname == NULL)
{
free(ndog);
return (NULL);
}
/*_strcp(nname, name);*/

nowner = malloc(sizeof(char) * _strl(owner) + 1);
if (nowner == NULL)
{
free(ndog);
free(nname);
return (NULL);
}
_strcp(nname, name);
_strcp(nowner, owner);

(*ndog).name = nname;
(*ndog).age = age;
(*ndog).owner = nowner;

return (ndog);
}

/**
 *_strl - long of string
 *@s: string
 *Return: long of string
 */
int _strl(char *s)
{
int con;
for (con = 0; s[con] != '\0'; con++)
;
return (con);
}

/**
 *_strcp - copy a string
 *@dest: destiny
 *@src: origin
 *Return: copy of string
 */
char *_strcp(char *dest, char *src)
{
int con1, con2;

for (con1 = 0; src[con1] != '\0'; con1++)
;

for (con2 = 0; con2 < con1; con2++)
dest[con2] = src[con2];
return (dest);
}
