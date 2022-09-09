#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int n;
int c;

srand(time(0));
n = rand() - RAND_MAX / 2;
c = n % 10;

if (c > 5)
{
	printf("%i Last digit of %d and is greater than 5\n", n, c);
}
else if (c == 0)
{
	printf("%i Last digit of %d is %d and is 0\n", n, c);
}
else
{
	printf("%i Last digit of %d is %d and is less than 6 and not 0\n", n, c);
}
return (0);
}
