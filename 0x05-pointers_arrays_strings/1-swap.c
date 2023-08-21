#include "main.h"

/**
*  void swap_int - swap value of two int
*  a,b : int 
*  Return: 0 is success
*/
void swap_int(int *a, int *b)
{
	int swap
		;
	swap = *a;
	*a = *b;
	*b = swap;
}
