#include"main.h"

/**
 * print_alphabet_x10 - function that prints alphabet 10x
 * return: always 0
 */

void print_alphabet_x10(void)

{
	int i;
	char alp;

	for (i = 1; i <= 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}

}
