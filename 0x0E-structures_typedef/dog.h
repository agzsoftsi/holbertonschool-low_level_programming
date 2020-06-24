#ifndef DOG_H
#define DOG_H
/**
 *struct dog - name of structure
 *@name: string of characters
 *@age: float
 *@owner: string of characters
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcp(char *dest, char *src);
int _strl(char *s);
void free_dog(dog_t *d);
#endif
