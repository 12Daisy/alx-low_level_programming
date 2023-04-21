#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
   * main - Entry point for the program
   *
   * Return: Always 0 (Success)
   */
int main(void)
{
    for (char letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n'); 

    return 0;
}
