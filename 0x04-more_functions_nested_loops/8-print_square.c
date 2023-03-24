#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @s: size of the square
 */
void print_square(int s)
{
    if (s <= 0)
    {
        _putchar('\n');
    } else
    {
        int i, j;

        for (i = 0; i < s; i++)
        {
            for (j = 0; j < s; j++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}

