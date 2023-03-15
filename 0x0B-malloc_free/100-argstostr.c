#include "main.h"
#include <stdlib.h>

/*
* main.h for input/output
*/

/**
* argstostr - function that adds(concantinate) strings with malloc
* @ac: arguement counter
* @av: string input
* Return: returns concantinated strings
*/

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, m = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);

	while (i < ac)
	{
	while (av[i][j])
	{
	c++;
	j++;
	}
	j = 0;
	i++;
	}
	s = malloc((sizeof(char) * c) + ac + 1);

	i = 0;
	while (av[i])
	{
	while (av[i][j])
	{
	s[m] = av[i][j];
	m++;
	j++;
	}
	s[m] = '\n';
	j = 0;
	m++;
	i++;
	}
	m++;
	s[m] = '\0';
	return (s);
}
