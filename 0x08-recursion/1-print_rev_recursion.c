#include "main.h"
/**
 * _print_rev_recursion - prints a string, followed in reverse
 * @s: string to be printed.
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}

}

