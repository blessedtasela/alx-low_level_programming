#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point to count number of parameter
 * @argc: arguement counter
 * @argv: arguement pointer to string
 * Return: 0 0n success
 */

int main(int argc, char *argv[])
{
int i, counter = 0;
if (*argv != NULL)
{
for (i = 0 ; i < argc ; i++)
{
counter = i;
}
printf("%d\n", counter);
}
return (0);
}
