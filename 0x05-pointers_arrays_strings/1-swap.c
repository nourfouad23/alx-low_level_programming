#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 *@a: passed parameter
 *@b: passed parameter
 *
 */

void swap_int(int *a, int *b)
{

int temp = *a;

*a = *b;
*b = temp;
}
