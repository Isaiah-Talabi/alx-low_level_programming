#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 * Return: 0 (Correct)
 */
void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet<='z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar("\n");
}
