#include "main.h"

/**
 * _strpbrk - search string
 * @s: contains string
 * @accept: contains compared value
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
  unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				goto exit;
exit: return (s[i] != '\0' ? s + i : '\0');
}
