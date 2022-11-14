#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
int _strlen(char *);
char *_memcpy(char *, char *, unsigned int);
void free_dog(dog_t *);

#endif
