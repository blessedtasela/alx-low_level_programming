#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point to multiply two numbers
 * @argc: arguement counter
 * @argv: arguement pointer to string
 * Return: 0 0n success
 */

int main(int argc, char *argv[])
{
int i, mul = 0, a, b;

if (argc == 3)
{
for (i = 0 ; i < argc ; i++)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
}
mul = a *b;
printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
