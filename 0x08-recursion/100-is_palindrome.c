#include "main.h"

/**
 * palind1 - obtains length of a
 * @x: string
 * @y: integer to count length
 * Return: On success
 */
int palind1(char *x, int y)
{
	if (*x == 0)
		return (y - 1);
	return (palind1(x + 1, y + 1));
}
/**
 * palind2 - compares string vs string reverse
 * @x: string
 * @y: length
 * Return: On success
 */

int palind2(char *x, int y)
{
	if (*x != *(x + y))
		return (0);
	else if (*x == 0)
		return (1);
	return (palind2(x + 1, y - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: On success
 */
int is_palindrome(char *s)
{
	int y;

	y = palind1(s, 0);
	return (palind2(s, y));
}
