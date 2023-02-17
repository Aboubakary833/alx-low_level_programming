#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	long int l_digit = n % 10;
	printf("Last digit of %d is %d\n", n, l_digit);
	return (0);
}
