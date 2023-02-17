#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;
	printf("Last digit of %d is %d\n", n, l_digit);
	return (0);
}
