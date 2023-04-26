#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - function to check, print and return
 *
 */


void jack_bauer(void)
{
int hours;
int minutes;

for (hours = 0; hours <= 23; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
if (hours < 10 && minutes < 10)
{
printf("0%d:0%d\n", hours, minutes);
}
else if (hours < 10)
{
printf("0%d:%d\n", hours, minutes);
}
else if (minutes < 10)
{
printf("%d:0%d\n", hours, minutes);
}
else
{
printf("%d:%d\n", hours, minutes);
}
}
}
}
