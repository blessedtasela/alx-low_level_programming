#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates random password
 * description: password for program 101-crack me
 * Return: return arrayof char
 */

int main(void)
{
	char passwd[100];
	int index = 0, half1, half2, sum = 0;

	srand(time(0));

	while (sum < 2772)
	{
	passwd[index] = 33 + rand() % 94;
	sum = sum + passwd[index++];
	}

	passwd[index] = '\0';

	if (sum != 2772)
	{
	half1 = sum - (2272) / 2;
	half2 = (sum - 2772) / 2;
	if ((sum - 2772) % 2 != 0)
	half1++;

	for (index = 0 ; passwd[index] ; index++)
	{
	if (passwd[index] >= (33 + half1))
	{
	passwd[index] = passwd[index] - half1;
	break;
	}
	}
	for (index = 0 ; passwd[index] ; index++)
	{
	if (passwd[index] >= (33 + half2))
	{
	passwd[index] = passwd[index] - half2;
	break;
	}
	}
	}
	printf("%s", passwd);
	return (0);
}
