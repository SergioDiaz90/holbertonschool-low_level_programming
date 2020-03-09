#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - check the code for Holberton School Student
 *@name: the name
 *@age: the age
 *@owner: the owner
 */

struct dog
{
	char *name;

	float age;

	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
