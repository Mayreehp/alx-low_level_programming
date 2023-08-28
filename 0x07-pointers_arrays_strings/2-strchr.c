#include "main.h"

/**
 *_strchr - searches for the first occurrence of the character c
 *@s: this is the string to be scanned
 *@c: this is the character to be searched in s
 *Return: 0
 */

char *_strchr(char *s, char c)
{
	int CEO = 0;/*CEO was assigned 0*/

	while (s[CEO] != 0) /*if s is not equal to 0*/
	{

		if (s[CEO] == c)/*if s[CEO] is  equal or not to c*/
			return (s + CEO); /*return value if ture*/
	CEO++;
	}
	if (c == 0) /* if c is equal or not to 0*/
		return (s + CEO); /*return value if true*/
return (0);
}
