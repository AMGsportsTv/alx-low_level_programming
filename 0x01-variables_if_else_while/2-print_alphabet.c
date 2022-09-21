#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 *main - Prints lowercase alphabets
 *
 *Return: Always successful
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++);
	{
		putchar(c);
	}
	return (0);
}

=======
 *main - prints the lowercase alphabets
 *
 *Return: Always Success
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
>>>>>>> 343486941eea268f6357b25f20ee1419053477f5
