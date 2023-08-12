#include <stdio.h>
/**
 *  main -print the alphabet in lowercase except e and q.
 *
 *  Return: Always 0 (Success)
 */
int main(void){
	char l;
  	 for (l='a';l<='z';l++)
        	if(l!='q' && l!='e')
       		 putchar(l);

        putchar('\n');


    return 0;
}
