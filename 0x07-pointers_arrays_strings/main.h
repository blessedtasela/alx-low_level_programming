#ifndef MAIN_H
#define MAIN_H

/*
* description: declares prototype for function declaration
*/
/**
* _putchar: function prototype to print character
*/

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *n);
char *cap_string(char *n);
char *leet(char *n);
char *rot13(char *n);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
int reverse_string(char *s);
void print_buffer(char *b, int size);
void _putchar(char n);

#endif
