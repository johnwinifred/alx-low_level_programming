#include <stdio.h>
#include "main.h"
int main(void)
{
	char c[8] = "_putchar";
	unsigned int i;

	for (i = 0; i < sizeof(c); i++)
	{
		_putchar(c[i]);
	}
_putchar('\n');
return (0);
}
