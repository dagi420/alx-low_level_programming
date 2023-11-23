#include "main.h"

/**
 * malloc_checked - function to assign memory using malloc
 * @b: size to be allocated
 * Return: pointer to the address of the memory block
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
