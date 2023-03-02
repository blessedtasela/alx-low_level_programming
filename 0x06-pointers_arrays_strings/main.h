#ifndef MAIN_H
#define MAIN_H

/*
* description: declares prototype for function declaration
*/
/**
* _putchar: function prototype to print character
*/

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *n);
char *cap_string(char *n);
char *leet(char *n);
char *rot13(char *n);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
void print_triangle(int size);
void print_times_table(int n);

#endif
