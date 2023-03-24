#include "main.h"
#include <unistd.h>
/**
 *_putchar writes a single character to the standard output stream, stdout
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
