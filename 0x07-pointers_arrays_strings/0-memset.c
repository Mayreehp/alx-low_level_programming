#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a char pointer given by main
 * @b: a constant byte
 * @n: how many byte of memory
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int CEO = 0; /*CEO is my variable and was assigned 0*/

	while (n > 0) /*as long as n is less than zero*/
	{
		s[CEO] = b; /*CEO is assigned to our char*/

		CEO++; /*post-increment, value first incremented afterwards*/
		n--; /*post-decrement*/
	}
	return (s); /*returning pointer to the memory of s*/
}
