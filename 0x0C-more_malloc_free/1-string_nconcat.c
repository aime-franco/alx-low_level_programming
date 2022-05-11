#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: n bytes of string 2
 * Return: Pointer to allocated memory of s1 + nbytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, x, y;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	l1 = 0, l2 = 0;
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	if (n < l2)
		l2 = n;

	s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s == 0)
		return (0);

	for (x = 0; x < l1; x++)
		*(s + x) = *(s1 + x);

	for (x = 0, y = l1; x < l2; y++, x++)
		*(s + y) = *(s2 + x);

	*(s + y) = '\0';

	return (s);
}
