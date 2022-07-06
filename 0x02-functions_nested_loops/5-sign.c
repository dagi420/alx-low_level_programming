#include "main.h"
/**
 * print_sign - print the sign number
 * @n: type int integer, can be negative or positive
 * Description: print +, 0, or - depenfing on number, along qith return
 * Return: 1 if +, 0 if 0, and -1 if -
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
{
_putchar('0');
return (0);
}
}
