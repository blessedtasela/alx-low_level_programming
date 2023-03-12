#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point to print all given  parameters
 * @argc: arguement counter
 * @argv: arguement pointer to string
 * Return: 0 0n success
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0 ; i < argc ; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
