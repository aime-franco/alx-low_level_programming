#include "main.h"
#include <stdio.h>

/**
* rev_string - reverses the string
* @s: contains the compared value
*/
void rev_string(char *s)
{
  int length, j, i;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	j = length - 1;
	i = 0;
	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
