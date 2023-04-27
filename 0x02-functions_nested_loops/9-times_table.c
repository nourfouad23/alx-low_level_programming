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
printf("0,  ");
for (j = 1; j <= 9; j++)
{
result = i * j;
if ((((i + 1) * (j + 1)) < 10) && j != 9)
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
