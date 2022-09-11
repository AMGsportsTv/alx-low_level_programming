#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints the last digits of the number
 *
 *Return: Always (success)
 */
int main(void)
{
	int n;
	int last = 'last digit of'
	'last digit of' = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	printf("%d %d %d and is", last,n,n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{printf("0\n");
	}
	else
		printf("less than 6 and not 0\n");
	return (0);
}
