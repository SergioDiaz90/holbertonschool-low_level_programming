#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - structure copy new structure.
 * @name: array of character pointers
 * @age: array of character pointers
 * @owner: array of character pointers
 * Return: dog_n.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_n;
	int cnt, cnt2, cp;
	char *new_name, *new_owner;

	dog_n = malloc(sizeof(dog_t));

	if (dog_n == NULL)
		return (NULL);

	for (cnt = 0; name[cnt] != '\0';  cnt++)
		;
	for (cnt2 = 0; owner[cnt2] != '\0'; cnt2++)
		;
	new_name = malloc(sizeof(char) * cnt + 1);

	if (new_name == NULL)
	{
		free(dog_n);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * cnt2 + 1);

	if (new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(dog_n);
		return (NULL);
	}
	for (cp = 0; cp <= cnt; cp++)
		new_name[cp] = name[cp];
	for (cp = 0; cp <= cnt2; cp++)
		new_owner[cp] = owner[cp];

	(*dog_n).name = new_name;
	(*dog_n).age = age;
	(*dog_n).owner = new_owner;

	return (dog_n);

}
