#include "main.h"

/**
 * _strstr - first occurence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)

{
	char *CEO1, *CEO2; /*my variables*/

	while (*haystack != '\0')

	{
		CEO1 = haystack; /*values*/

		CEO2 = needle;

		/*Start haystack loop with variables*/

		while (*haystack != '\0' && *CEO2 != '\0' && *haystack == *CEO2)

		{
			haystack++;

			CEO2++;

		}
		if (*CEO2 == '\0')

			return (CEO1);

		haystack = CEO1 + 1;

	}

	return (0);

}
