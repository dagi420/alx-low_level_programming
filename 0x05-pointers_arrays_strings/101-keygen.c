#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates key
 * Return: 0 Always.
 */
int main(void)
{
int num;
srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
