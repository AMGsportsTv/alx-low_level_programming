#include <stdio.h>

/**
 *main -The size of command prints the size in bytes of any type.
 *Return: The types vary from char, int, float, double and can be modified into signed and unsigned and short or long.
 */
int main(void)
{
	printf("size of char is=%i byte\n", sizeof(char));
	printf("size of int is=%i byte\n", sizeof(int));
	printf("size of long int is=%i byte\n", sizeof(long int));
	printf("size of float is=%i byte\n", sizeof(float));
	print("size of long long int is=%i byte\n", sizeof(long long int));

	return (0);
}
