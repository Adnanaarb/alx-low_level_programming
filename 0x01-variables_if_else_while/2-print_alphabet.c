#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -> print the alphabet in lowercase
 *
 *Return: Always 0 (Success)
 */
int main(void){
	char L;
	for (L = 'a'; L <= 'z'; L++)
		putchar(L);
	putchar('\n');
	return (0);
}
