#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet()
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
printf(i);
}
printf("\n");
}	

int main(void)
{
print_alphabet();
    return (0);
}
