#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0.
 */
int main(void){
	char l,L;
	for (l='a';l<='z';l++)
        putchar(l);
        	for (L='A';L<='Z';L++){
        	putchar(L);
        	}
    	putchar('\n');

    return 0;
}
