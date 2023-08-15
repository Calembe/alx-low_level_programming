#include "main.h"
/**
 * print _alphabet - utilizes on the _putchar function to print alphabet a - z
 *
 * Return: always 0
 */

void print_alphabet_x10(void);
{
	char ch ;
	int ch;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
		{
}
