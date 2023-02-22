/**
 * 2-print_alphabet - function that prints 10 times the alphabet, in lowercase
 * return: void
 */

void print_alphabet_x10(void)
{
	char u;
	int i = 0;

	while (i <= 9)
	{
		for (u = 'a'; u <= 'z'; u++)
		{
			_putchar(u);

		}
		_putchar('\n');
		i++;
	}
}
