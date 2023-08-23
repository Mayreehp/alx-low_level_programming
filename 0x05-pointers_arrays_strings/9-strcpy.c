#include "main.h"

/**
 * _strcpy - copies the string pointed to src, including \0
 * @src: pointer
 * @dest: pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}
	for (z = 0; z <= length; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
