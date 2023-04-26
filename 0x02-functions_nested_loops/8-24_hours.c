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
int oneDigitHour;
int oneDigitMinute;

for ( hours = 0; hours <= 23; hours++)
{
for ( minutes = 0; minutes <=60; minutes++)
{
if ( hours < 10 && minutes < 10)
{
oneDigitHour = "0" + hours;
oneDigitMinute = "0" + minutes;
_putchar('0' + oneDigitHour);
_putchar('0' + oneDigitMinute);
_putchar('\n');
}
else
{
_putchar('0' + hours);
_putchar('0' + minutes);
_putchar('\n');
}
