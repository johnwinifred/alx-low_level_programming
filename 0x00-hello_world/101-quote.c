#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a quote using write not printf or
 *puts
 * Return: 1 (Not success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}