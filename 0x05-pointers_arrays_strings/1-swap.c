#include "main.h"

/**
* swap_int - A function that swaps the value of two integers
* @a: first int
* @b: second int
* Return: void
*/

void swap_int(int *a, int *b)
{
		int x = *a;

		*a = *b;
		*b = x;
}

