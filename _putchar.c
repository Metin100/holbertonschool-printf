#include "unistd.h"
/**
 * _putchar- function
 * @c: parameter
 * Return: 0
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
