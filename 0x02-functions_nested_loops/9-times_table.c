#include <stdio.h>
#include "main.h"

/**
 * times_table - function to check, print and return
 *
 */

void times_table(void)
{
int i;
int j;
int result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (result < 10)
{
printf("%d,  ", result);
}
else
{
printf("%d, ", result);
}
}
printf("\n");
}
}
