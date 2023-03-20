#ifndef _DOG_
#define _DOG_
int _putchar (char c);
/**
 * struct dog - data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: dog with name age, and owner's name.
 */
struct dog
{
	char  *name;
	float age;
	char * owner;
};

typedef struct dog dog_d;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_d *new_dog(char *name, float age, char *owner);
void free_dog(dog_d *d);
#endif
