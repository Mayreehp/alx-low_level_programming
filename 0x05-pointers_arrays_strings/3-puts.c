#include "main.h"

/**
 * _puts - this prints a string on a new line
 * @str: a pointer given by the main function
 * Return: 0
 */

void _puts(char *str)
{
	int z = 0;

	while (str[z] != '\0')

{
	_putchar(str[z]);
	z++;
}

	_putchar(10);

}
