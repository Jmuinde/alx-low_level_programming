#ifndef DOG_H
#define DOG_H
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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
dog_t *new_dog(char *name, float age, char *owner);
#endif
