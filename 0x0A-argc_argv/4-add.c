#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * main - Entry point
 *@argc: number returned
 *@argv: strings returned
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, result;
bool check = false;

result = 0;

if (argc > 1)
{
i = 1;

while (i < argc)
{
if (atoi(argv[i]) > 0)
{
check = true;
result += atoi(argv[i]);
i++;
}
else
{
check = false;
printf("Error\n");
break;
return (1);
}
}
if (check == true)
printf("%d\n", result);
}
else
{
result = 0;
printf("%d\n", result);
}
return (0);
}

