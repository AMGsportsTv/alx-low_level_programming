#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - prints lowercase alphabets 
 *
 *Return: Always success
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
