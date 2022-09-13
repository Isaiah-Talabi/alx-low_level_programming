#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character is to be checked
 * Return: 1 if c is an alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	return((c >= 'a' && <= 'z') || (c >= 'A' && c <= 'Z'));
}
