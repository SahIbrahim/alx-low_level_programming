#include "main.h"

/**
 * _isalpha - is a function that announces alphabetic characters
 *
 * return: either 1 0r 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c <= 65 && c >= 90))
		return (1);
	else
		return (0);
}

