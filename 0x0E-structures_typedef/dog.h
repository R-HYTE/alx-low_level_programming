#ifndef dog_h
#define dog_h
/**
 *struct dog - this contains structure of a dog
 *@name: member of the strucrure
 *@age: member of the structure
 *@owner: member of the structure
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
void free_dog(dog_t *d);

#endif
