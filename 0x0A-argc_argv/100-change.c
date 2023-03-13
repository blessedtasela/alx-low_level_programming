#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - print number of changes of input value by dividing and counting
 * @argc: arguement counter
 * @argv: arguement pointer to string
 * Return: 0 0n success
 */

int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc == 1)
{
printf("Error\n");
return (1);
}
else
{
cents = atoi(argv[1]);
while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents = cents - 25;
continue;
}
if ((cents - 10) >= 0)
{
cents = cents - 10;
continue;
}
if ((cents - 5) >= 0)
{
cents = cents - 5;
continue;
}
if ((cents - 2) >= 0)
{
cents = cents - 2;
continue;
}
cents--;
}
printf("%d\n", coins);
}
return (0);
}
