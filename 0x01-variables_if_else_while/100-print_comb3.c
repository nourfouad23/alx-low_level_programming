#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;

for (i = 0 ; i < 10 ; i++)
{
for (j = 1 ; j < 10 ; j++)
{
if (i != j && j > i)
{
putchar('0' + i);
putchar('0' + j);
if (i < 8 && j <= 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
