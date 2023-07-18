#ifndef STRUCTERS
#define STRUCTERS
/**
 * struct dog - description for the  pet
 * @name: name of the dog
 * @age: age of the pet
 * @owner: name of the owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
#ifndef _Prototypes_H
#define _Prototypes_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
