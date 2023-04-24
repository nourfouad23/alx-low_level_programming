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
int z;

for (i = 0 ; i < 10 ; i++)
{
for (j =i+1 ; j < 10 ; j++)
{
for (z = j+1 ; z < 10 ; z++)
{
if (i != j && i != z && j!= z && z > j)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + z);
if (i < 8 && j <= 8 && z <= 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
