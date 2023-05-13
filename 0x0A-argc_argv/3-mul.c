#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *@argc: number returned
 *@argv: strings returned
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, result = 1;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
result = result * atoi(argv[i]);
}
printf("%d\n", result);

return (0);
}
else
{
printf("Error");
return (1);
}
}
