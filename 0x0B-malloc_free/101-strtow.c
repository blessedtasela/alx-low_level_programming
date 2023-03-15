#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_word(char *str);
char **strtow(char *str);
/**
* word_len - locates index marking of first word of string
* @str: string
* Return: return length of string
*/

int word_len(char *str)
{
	int index = 0, l = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
	l++;
	index++;
	}
	return (l);
}

/**
* count_word - counts the number of words in a string
* @str: string
* Return: return the word count of string
*/

int count_word(char *str)
{
	int index = 0, word = 0, l = 0;

	for (index = 0 ; *(str + index) ; index++)
	l++;

	for(index = 0 ; index < l ; index++)
	{
	if (*(str + index) != ' ')
	{
	word++;
	index = index + word_len(str + index);
	}
	}
	return (word);
}

/**
* strtow - function that splits strings with malloc
* @str: string
* Return: return splitted string
*/

char **strtow(char *str)
{
	char **strings;
	int i = 0, word, w, letter, l;

	if (str == NULL || str[0] == '\0')
	return (NULL);

	word = count_word(str);
	if (word == 0)
	return (NULL);

	strings = (char **) malloc(sizeof(char *) * (word + 1));
	if (strings == NULL)
	return (NULL);

	for (w = 0 ; w < word ; w++)
	{
	while (str[i] == ' ')
	i++;

	letter = word_len(str + i);
	strings[w] = malloc(sizeof(char)* (letter + 1));
	if (strings[w] == NULL)
	{
	for (; w >= 0 ; w--)
	free(strings[w]);

	free(strings);
	return (NULL);
	}
	for (l = 0 ; l < letter ; l++)
	strings[w][l] = str[i++];
	strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
