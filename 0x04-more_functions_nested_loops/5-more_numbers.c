#include "main.h"

/**
 * prints more numbers
 * Return:void
 */

void more_numbers(void)
{
	char j, c;
	int i = 0;


	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}

			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}

}
