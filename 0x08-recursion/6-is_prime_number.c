#include "main.h"
#include <stdio.h>

int is_prime_number(int n)
{

int i;

if (n <= 1)
{
return (0);
}

i = 2;

if (i * i <= n)
{
if (n % i == 0)
{
return (0);
}
is_prime_number(n);
}

return (1);
}
