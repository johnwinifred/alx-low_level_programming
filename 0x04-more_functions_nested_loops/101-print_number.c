include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n) {
    if (n < 0) {
	    n = -n;
        _putchar('-');
    }
    else
    {
        n = n;
    }

    if (n / 10) {
        print_number(n / 10);
    }
    _putchar((n % 10) + '0');
}

