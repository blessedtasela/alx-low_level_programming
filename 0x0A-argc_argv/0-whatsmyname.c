#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point to print name of command
 * @argc: arguement counter
 * @argv: arguement pointer to string
 * Return: 0 0n success
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", *argv);
}
return (0);
}
