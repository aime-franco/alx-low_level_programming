#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0 after excution of the code
 */
int main(void)
{
	int n;
	int L;
	char str[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	if (L > 5)
		printf("%s %d is %d and is greater than 5", str, n, L);
	else if (L == 0)
		printf("%s %d is %d and is 0", str, n, L);
	else if (L < 6)
		printf("%s %d is %d and is less than 6 and not 0", str, n, L);
	return (0);
}
