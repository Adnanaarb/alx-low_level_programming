#include "main.h"

/**
 * print_alphabet*10 - prints the alphabet in lowercase 10 times.
 *
 */
void print_alphabet_x10(void)
{
        char letter;
        for (int x = '0'; x <= '10'; x++){
            for (letter = 'a'; letter <= 'z'; letter++){
                putchar(letter);
            }
                putchar('\n');
        }   
        
}
