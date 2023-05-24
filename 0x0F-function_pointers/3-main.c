#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Start here to do stuff
 * @argc: Number of arguments passed in
 * @argv: Arguments stored in each index
 * Return: Success
 */

int main(int argc, char *argv[])
{
int final, n1, n2;
int (*ptr)(int, int);

if (argc < 4 || argv[1] == NULL || argv[3] == NULL)
{
printf("Error\n");
exit(98);
}

if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
exit(100);
}
n1 = atoi(argv[1]);

n2 = atoi(argv[3]);

ptr = get_op_func(argv[2]);

if (ptr == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

final = ptr(n1, n2);

printf("%d\n", final);

return (0);
}
