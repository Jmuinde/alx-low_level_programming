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
void init_dog(struct dog *d, char *name, float age, char *owner);
