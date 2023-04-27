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
int nextValue;

for (i = 0; i <= 9; i++)
{
printf("0,  ");
for (j = 1; j <= 9; j++)
{
result = i * j;
nextValue = i * (j + 1);

if ((nextValue < 10) && j != 9)
{
printf("%d,  ", result);
}
else if ((result < 10 || result > 10) && j == 9)
{
printf("%d", result);
}
else
{
printf("%d, ", result);
}
}
printf("\n");
}
}
