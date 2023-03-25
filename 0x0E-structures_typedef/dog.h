#ifndef DOG_H
#define DOG_H

/**
 * struct dog- for dogs
 * @age: dogs age
 * @owner: it's owner
 * @name: dog's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* dog_t - typedef for dog */

typedef struct dog dogt;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogt *new_dog(char *name, float age, char *owner);
void free_dog(dogt *d);

#endif /* DOG_H */
