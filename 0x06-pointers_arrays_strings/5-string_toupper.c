#include "main.h"

/**
 * string_toupper - change all lower case of a string to uppercase
 * @CEO: pointer i gave myself
 * Return: CEO
 */

char *string_toupper(char *CEO)
{
	int i = 0;

	while (CEO[i] != 0)
	{
		if (CEO[i] >= 97 && CEO[i] <= 122)
			CEO[i] -= 32;
		i++;
	}
	return (CEO);
}
