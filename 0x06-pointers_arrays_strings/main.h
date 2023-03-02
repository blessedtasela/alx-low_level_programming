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
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
void print_triangle(int size);
void print_times_table(int n);

#endif
