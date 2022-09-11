#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints lowercase alphabets followed by a new line
 *
 *Return: Always Succcessful
 */
int main(void)
{
    char letter;
    
    for (letter = 'a'; letter <= 'z'; letter++ )
        putchar(letter);
    putchar("\n");
    return (0);
}
