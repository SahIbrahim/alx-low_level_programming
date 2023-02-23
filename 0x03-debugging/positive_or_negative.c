#include "main.h"

/**
 * postitive_or_negative - functio checks if a number is positive or negative
 *
 * @i: the number to be check
 *
 * return: always 0
 */

void positive_or_negative(int i)

{
	if (i < 0)
		printf("%d is nagative\n", i);
	else
		printf("%d is positive\n", i);
}
