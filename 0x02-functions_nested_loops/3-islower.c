#include "main.h"

/**
 * _islower - function that prints if alphabet is a lowercase
 *
 * return: 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
