#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - returns true if char is lowercase else returns false
 */


int _islower(int c)
{
if (islower(c))
{
return 1;
}
else
{
return 0;
}
}
