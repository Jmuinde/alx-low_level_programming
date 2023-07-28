#ifndef STRUCTERS
#define STRUCTERS
/**
 * struct dog - data type containing description of the pet
 * @name: name element of the pet
 * @age: age element of the pet
 * @owner: name of the owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#ifndef THE_FUNCTIONSS_H
#define THE_FUNCTIONSSS_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
