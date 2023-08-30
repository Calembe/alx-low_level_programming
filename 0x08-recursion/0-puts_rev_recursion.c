#include "main.h"

/**
 * _puts_recursion - functions like puts();
 * @s: input
 * Return: Always 0 (success)
 */
void _puts_rev_recursion(char *s)
{
		if (*s)
	{
			_putchar(*s);
			_puts_rev_recursion(s + 1);
	}
		else
		_putchar('\n');
}
