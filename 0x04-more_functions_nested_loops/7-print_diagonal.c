#include "main.h"

/**
 * print_diagonal, followed by a new line;
@n = mumber of \\ to be printed.
 * Return:void
 */

void print_diagonal(int n)
{

	int i = 0, a;

	while (i < n && n > 0)
	{
		a = 0;
		while (a < n)
		{
			_putchar(' ');
			a++;
		}

		_putchar('\\');
	        _putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
