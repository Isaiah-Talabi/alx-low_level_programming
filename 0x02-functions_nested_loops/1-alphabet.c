#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 * Return: 0 (Correct)
 */
void print_alphabet(void)
{
	char ch;
	ch = 'a';

	while (ch <='z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar("\n");
}
