#ifndef STRINGS_H
#define STRINGS_H

#include "../../kernel/util.h"

#define NUL '\0'

void int_to_ascii(int n, char str[]);
void hex_to_ascii(int n, char str[]);
void reverse(char s[]);
int strlen(char s[]);
void backspace(char s[]);
void append(char s[], char n);
int strcmp(char s1[], char s2[]);
int strtonum(char *str);

#endif
