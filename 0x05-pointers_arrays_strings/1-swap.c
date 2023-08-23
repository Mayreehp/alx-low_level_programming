#include "main.h"

/**
 * swap_int - swap the value of two intgers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int CEO;

	CEO = *a;
	*a = *b;
	*b = CEO;
}
