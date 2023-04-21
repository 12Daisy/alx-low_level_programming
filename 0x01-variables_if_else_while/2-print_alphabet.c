#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    char letter = 'a';

    /* print each letter of the alphabet using putchar */
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    /* print a newline character at the end */
    putchar('\n');

    return 0;
}

