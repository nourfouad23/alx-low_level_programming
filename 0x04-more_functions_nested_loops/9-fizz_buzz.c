#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if (num % 15 == 0)
{
printf("FizzBuzz ");
}
else if (num % 5 == 0 && num != 100)
{
printf("Buzz ");
}
else if (num % 5 ==0 && num == 100)
{
printf("Buzz");
}
else if (num % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", num);
}
}
printf("\n");
return (0);
}
