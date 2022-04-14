#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: 0 after excuting code
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
