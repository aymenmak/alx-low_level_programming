#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to print
 *
 * Return: nothing on success
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
