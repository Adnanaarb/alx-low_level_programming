#include "main.h"

/**
 * print_alphabet*10 - prints the alphabet in lowercase 10 times, followed by a new line.
 */
void print_alphabet(void)
{
        char letter;
        for (int x = '0'; x <= '10'; x++){
            for (letter = 'a'; letter <= 'z'; letter++){
                putchar(letter);
            }
                putchar('\n');
        }   
        putchar('\n');
}
