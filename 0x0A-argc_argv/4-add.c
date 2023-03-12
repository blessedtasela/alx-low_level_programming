#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point to add numbers
 * @argc: arguement counter
 * @argv: arguement pointer to string
 * Return: 0 0n success
 */

int main(int argc, char *argv[])
{
int i;
unsigned int j, sum = 0;
char *c;

if (argc == 1)
printf("0\n");
else
{
for (i = 1 ; i < argc ; i++)
{
c = argv[i];
for (j = 0 ; j < strlen(c) ; j++)
{
if (c[j] < 48 || c[j] > 57)
{
printf("Error\n");
return (1);
}
else
sum += atoi(c);
c++;
}
}
printf("%d\n", sum);
}
return (0);
}
