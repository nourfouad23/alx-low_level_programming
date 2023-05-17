#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: number returned
 *@argv: strings returned
 *Return: returns value
 */

int main(int argc, char *argv[])
{
int i, result;

result = 1;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
result = result * atoi(argv[i]);
}
}
else if (argc == 0)
{
result = 1;
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", result);
return (result);
}
