#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a new type called struct dog
 *
 * @name: name
 * @age: age
 * @owner: owner name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
