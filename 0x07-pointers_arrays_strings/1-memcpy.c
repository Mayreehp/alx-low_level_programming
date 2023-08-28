#include "main.h"

/**
 * _memcpy - like memset but a function that copies memory area
 * @dest: destination for our memory
 * @src: source to copy from
 * @n: number of characters to copy
 * Return: pointer back to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int CEO = 0; /*same code as memset*/

	while (n > 0)
	{
		dest[CEO] = src[CEO];
		CEO++;
		n--;
	}
	return (dest);
}
